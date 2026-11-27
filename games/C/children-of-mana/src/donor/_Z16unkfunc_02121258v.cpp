/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _Z16unkfunc_02121258v from https://github.com/GoldieLeGenie/DQIV-DECOMP src/ov002/mp/UnkWH.cpp (license: none), reused by
 * tools/donor_match.py */
extern "C" {
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
}
extern "C" {
typedef u16 WMErrCode;
}
extern "C" {
extern WMErrCode func_020619b4(void (*callback)(void *arg));
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
extern void unkfunc_02121100(int code);
extern BOOL unkfunc_02121258();
extern void unkfunc_021212b0(void *arg);
extern u16 data_02129ea4;
extern u16 data_02129eac;
extern int data_02129ed0;
void unkfunc_02121100(int code);
#pragma thumb off
BOOL unkfunc_02121258() {
    if (data_02129ed0 == WH_SYSSTATE_CONNECTED || data_02129ed0 == WH_SYSSTATE_DATASHARING ||
        data_02129ed0 == WH_SYSSTATE_KEYSHARING) {
        return 1;
    }
    WMErrCode result = func_020619b4(unkfunc_021212b0);
    if (result != 0x2) {
        unkfunc_02121100(result);
        return 0;
    }
    data_02129eac = 0;
    data_02129ea4 = 1;
    return 1;
}
void unkfunc_021212b0(void *arg);
