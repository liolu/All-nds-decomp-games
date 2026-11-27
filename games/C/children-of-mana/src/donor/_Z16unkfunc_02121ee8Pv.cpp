/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _Z16unkfunc_02121ee8Pv from https://github.com/GoldieLeGenie/DQIV-DECOMP src/ov002/mp/UnkWH.cpp (license: none), reused by
 * tools/donor_match.py */
extern "C" {
typedef unsigned short u16;
typedef unsigned char u8;
}
extern "C" {
typedef u16 WMErrCode;
typedef struct WMCallback {
    u8 unk_00[0x02 - 0x00];
    WMErrCode errcode;
} WMCallback;
}
enum {
    WH_SYSSTATE_STOP           = 0,
    WH_SYSSTATE_IDLE           = 1,
    WH_SYSSTATE_SCANNING       = 2,
    WH_SYSSTATE_BUSY           = 3,
    WH_SYSSTATE_CONNECTED      = 4,
    WH_SYSSTATE_DATASHARING    = 5,
    WH_SYSSTATE_KEYSHARING     = 6,
    WH_SYSSTATE_MEASURECHANNEL = 7,
    WH_SYSSTATE_CONNECT_FAIL   = 8,
    WH_SYSSTATE_ERROR          = 9,
    WH_SYSSTATE_FATAL          = 10
};
extern void unkfunc_021210f0(int state);
extern void unkfunc_02121ee8(void *arg);
void unkfunc_021210f0(int state);
#pragma thumb off
void unkfunc_02121ee8(void *arg) {
    WMCallback *cb = (WMCallback *) arg;
    if (cb->errcode != 0) {
        unkfunc_021210f0(WH_SYSSTATE_FATAL);
        return;
    }
    unkfunc_021210f0(WH_SYSSTATE_STOP);
}
