/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _Z16unkfunc_02121e28v from https://github.com/GoldieLeGenie/DQIV-DECOMP src/ov002/mp/UnkWH.cpp (license: none), reused by
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
extern WMErrCode func_02061648(void (*callback)(void *arg), u16 aid);
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
extern void unkfunc_02121100(int code);
extern BOOL unkfunc_02121e28();
extern void unkfunc_02121e60(void *arg);
extern void unkfunc_02122840();
void unkfunc_021210f0(int state);
void unkfunc_02121100(int code);
#pragma thumb off
BOOL unkfunc_02121e28() {
    unkfunc_021210f0(WH_SYSSTATE_BUSY);
    WMErrCode result = func_02061648(unkfunc_02121e60, 0);
    if (result == 0x2) {
        return 1;
    }
    unkfunc_02121100(result);
    unkfunc_02122840();
    return 0;
}
void unkfunc_02121e60(void *arg);
void unkfunc_02122840();
