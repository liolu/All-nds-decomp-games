/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* TPi_TpCallback from projets/blue-dragon-awakened-shadow/src/auto/TPi_TpCallback.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern void func_02085398(void);
typedef void (*UnkTpCallback)(u32 command, u8 result, u16 index);
typedef struct UnkTpData {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
} UnkTpData;
typedef union UnkTpRawData {
    struct {
        u32 x : 12;
        u32 y : 12;
        u32 touch : 1;
        u32 validity : 2;
        u32 dummy : 5;
    } e;
    u16 half[2];
    u32 raw;
} UnkTpRawData;
typedef struct UnkTpWork {
    u16 initialized;
    u16 unk_02;
    UnkTpCallback callback;
    UnkTpData sample;
    u16 index;
    u16 unk_12;
    UnkTpData *samplingBufs;
    u16 bufSize;
    u8 unk_1a[0x34 - 0x1a];
    u16 unk_34;
    u16 state;
    u16 errorFlags;
    u16 busyFlags;
} UnkTpWork;
extern UnkTpWork data_020da584;
void func_02087168(u32 tag, u32 data, BOOL err) {
    u16 result = (u16) data;
    u32 tpResult;
    u16 command = (u16) ((result & 0x7f00) >> 8);

    if (err) {
        data_020da584.errorFlags |= 1 << command;
        if (data_020da584.callback) {
            data_020da584.callback(command, 4, 0);
        }
        return;
    }

    if (command == 0x10) {
        UnkTpRawData raw;
        UnkTpData *buf;

        data_020da584.index++;
        if (data_020da584.index >= data_020da584.bufSize) {
            data_020da584.index = 0;
        }
        raw.half[0]   = ((vu16 *) 0x027fffaa)[0];
        raw.half[1]   = ((vu16 *) 0x027fffaa)[1];
        buf           = &data_020da584.samplingBufs[data_020da584.index];
        buf->x        = raw.e.x;
        buf->y        = raw.e.y;
        buf->touch    = (u8) raw.e.touch;
        buf->validity = (u8) raw.e.validity;
        if (data_020da584.callback) {
            data_020da584.callback(command, 0, (u8) data_020da584.index);
        }
        return;
    }

    if (!(data & 0x1000000)) {
        return;
    }

    switch ((u8) result) {
        case 0:
            switch (command) {
                case 0: {
                    UnkTpRawData raw;
                    raw.half[0]                   = ((vu16 *) 0x027fffaa)[0];
                    raw.half[1]                   = ((vu16 *) 0x027fffaa)[1];
                    data_020da584.sample.x        = raw.e.x;
                    data_020da584.sample.y        = raw.e.y;
                    data_020da584.sample.touch    = (u8) raw.e.touch;
                    data_020da584.sample.validity = (u8) raw.e.validity;
                    data_020da584.state           = 0;
                    break;
                }
                case 1:
                    data_020da584.state = 2;
                    break;
                case 2:
                    data_020da584.state = 0;
                    break;
            }
            data_020da584.busyFlags &= ~(1 << command);
            if (data_020da584.callback) {
                data_020da584.callback(command, 0, 0);
            }
            return;
        case 4:
            tpResult = 3;
            break;
        case 2:
            tpResult = 1;
            break;
        case 3:
            tpResult = 2;
            break;
        default:
            goto terminate;
    }

    data_020da584.errorFlags |= 1 << command;
    data_020da584.busyFlags &= ~(1 << command);
    if (data_020da584.callback) {
        data_020da584.callback(command, (u8) tpResult, 0);
    }
    return;

terminate:
    func_02085398();
}
