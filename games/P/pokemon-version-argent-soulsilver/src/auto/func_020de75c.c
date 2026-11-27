#include "m2c.h"

extern void _Z24InvalidateDataCacheRangePKvj(void *addr, u32 size);
extern void _Z15CleanCacheRangePKvj(void *addr, u32 size);
extern void func_020deb08(void);
extern s32 func_020de458(void);
extern void func_020d3f48(void);
extern void func_020d4994(void *dst, u8 value, u32 size);
extern void func_020d4a50(const void *src, void *dst, u32 size);
extern void func_020d47b8(const void *src, void *dst, u32 size);
extern void func_020d4790(u16 value, void *dst, u32 size);

typedef void (*WMCallbackFunc)(void *arg);

typedef struct {
    u16 state;
    u16 busyApiid;
    s32 apiBusy;
    u8 reserved[0x6a];
    u16 dataSize;
} WMStatus;

typedef struct {
    void *WM7;
    WMStatus *status;
    u32 *indbuf;
    u32 *fifo9to7;
    u32 *fifo7to9;
    u16 dmaNo;
    u16 scanOnlyFlag;
    WMCallbackFunc callbackTable[44];
    WMCallbackFunc indCallback;
    WMCallbackFunc portCallbackTable[16];
    void *portCallbackArgument[16];
    u32 connectedAidBitmap;
    u16 myAid;
} WMArm9Buf;

typedef struct {
    u16 type;
    u16 field02;
    u16 field04;
    u16 field06;
    u16 field08;
    u16 field0a;
    u16 field0c;
    u16 pad0e;
    u16 field10;
    u16 field12;
    u16 field14;
    u16 field16;
    u16 field18;
    u16 field1a;
    u32 field1c;
    u16 field20;
    u16 field22;
    u16 field24;
    u16 field26;
    u16 field28;
    u16 field2a;
    u16 field2c;
    u16 field2e;
} WMRecvMessage;

typedef struct {
    u16 type;
    u16 field02;
    u16 field04;
    u16 field06;
    u32 field08;
    u32 field0c;
    u16 field10;
    u16 field12;
    u8 field14[6];
    u16 field1a;
    u32 field1c;
    u16 field20;
    u16 field22;
    u8 field24[24];
    u16 field3c;
    u16 pad3e;
    u16 field40;
    u16 field42;
} WMSendMessage;

typedef struct {
    u16 initialized;
    WMArm9Buf *wm9buf;
    u8 reserved[0x48];
    WMSendMessage msg;
} WMSys;

extern WMSys data_021e4240;

void func_020de75c(void *chan, void *buf, s32 flag) {
    WMArm9Buf *wm      = data_021e4240.wm9buf;
    WMRecvMessage *msg = (WMRecvMessage *) buf;
    u16 value;
    void *src;
    void *payload;
    u16 sub;
    u16 port;
    u16 aid;
    u16 x;
    u16 y;
    u16 i;

    if (flag) {
        return;
    }

    _Z24InvalidateDataCacheRangePKvj(wm->fifo7to9, 0x100);
    if (!wm->scanOnlyFlag) {
        _Z24InvalidateDataCacheRangePKvj(wm->status, 0x800);
    }
    if (buf != wm->fifo7to9) {
        _Z24InvalidateDataCacheRangePKvj(buf, 0x100);
    }

    if (msg->type >= 0x2c) {
        if (msg->type == 0x80) {
            if (msg->field02 == 0x13) {
                func_020d3f48();
            }
            if (wm->indCallback) {
                wm->indCallback(buf);
            }
        } else if (msg->type == 0x82) {
            if (wm->portCallbackTable[msg->field06]) {
                msg->field1c = (u32) wm->portCallbackArgument[msg->field06];
                msg->field22 = wm->connectedAidBitmap;
                _Z24InvalidateDataCacheRangePKvj(M2C_FIELD(msg, u32 *, 8), wm->status->dataSize);
                wm->portCallbackTable[msg->field06](buf);
            }
        } else if (msg->type == 0x81) {
            msg->type = 0xf;
            if (msg->field1c) {
                ((WMCallbackFunc) msg->field1c)(buf);
            }
        }
    } else {
        if (msg->type == 0xe) {
            if ((u16) (msg->field04 + 0xfff5) <= 1 && msg->field02 == 0) {
                _Z24InvalidateDataCacheRangePKvj(M2C_FIELD(msg, u32 *, 8), wm->status->dataSize);
            }
        }
        if (msg->type == 2 && msg->field02 == 0) {
            WMCallbackFunc cb = wm->callbackTable[msg->type];
            func_020de458();
            if (cb) {
                cb(buf);
            }
            return;
        }
        if (wm->callbackTable[msg->type]) {
            wm->callbackTable[msg->type](buf);
            if (!data_021e4240.initialized) {
                return;
            }
        }
        if (msg->type == 8 || msg->type == 0xc) {
            if (msg->type == 8) {
                src     = &msg->field0a;
                sub     = msg->field08;
                port    = msg->field10;
                value   = msg->field12;
                payload = &msg->field14;
                aid     = 0;
                y       = msg->field2c;
                x       = msg->field2e;
            } else if (msg->type == 0xc) {
                sub     = msg->field08;
                aid     = msg->field0a;
                value   = msg->field0c;
                port    = 0;
                payload = 0;
                src     = &msg->field10;
                y       = msg->field16;
                x       = msg->field18;
            }
            if (sub == 7 || sub == 9 || sub == 0x1a) {
                if (sub == 7) {
                    wm->connectedAidBitmap |= 1 << port;
                } else {
                    wm->connectedAidBitmap &= ~(1 << port);
                }
                wm->myAid = aid;
                func_020d4994(&data_021e4240.msg, 0, 0x44);
                data_021e4240.msg.type    = 0x82;
                data_021e4240.msg.field02 = 0;
                data_021e4240.msg.field04 = sub;
                data_021e4240.msg.field08 = 0;
                data_021e4240.msg.field0c = 0;
                data_021e4240.msg.field10 = 0;
                data_021e4240.msg.field12 = port;
                data_021e4240.msg.field20 = aid;
                data_021e4240.msg.field22 = wm->connectedAidBitmap;
                data_021e4240.msg.field1a = 0xffff;
                data_021e4240.msg.field3c = value;
                func_020d4a50(src, &data_021e4240.msg.field14, 6);
                if (payload) {
                    func_020d47b8(payload, &data_021e4240.msg.field24, 0x18);
                } else {
                    func_020d4790(0, &data_021e4240.msg.field24, 0x18);
                }
                data_021e4240.msg.field40 = (aid == 0) ? y : x;
                data_021e4240.msg.field42 = (aid == 0) ? x : y;
                for (i = 0; i < 16; i++) {
                    data_021e4240.msg.field06 = i;
                    if (wm->portCallbackTable[i]) {
                        data_021e4240.msg.field1c = (u32) wm->portCallbackArgument[i];
                        wm->portCallbackTable[i](&data_021e4240.msg);
                    }
                }
            }
        }
    }

    _Z24InvalidateDataCacheRangePKvj(wm->fifo7to9, 0x100);
    func_020deb08();
    if (buf != wm->fifo7to9) {
        msg->type |= 0x8000;
        _Z15CleanCacheRangePKvj(buf, 0x100);
    }
}
