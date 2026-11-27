/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _Z16unkfunc_0212115cPv from https://github.com/GoldieLeGenie/DQIV-DECOMP src/ov002/mp/UnkWH.cpp (license: none), reused by
 * tools/donor_match.py */
extern "C" {
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
}
extern "C" {
typedef u16 WMErrCode;
typedef struct WMParentParam {
    void *userGameInfo;
    u16 userGameInfoLength;
    u32 ggid;
    u16 tgid;
    u16 entryFlag;
    u16 maxEntry;
    u16 multiBootFlag;
    u16 KS_Flag;
    u16 CS_Flag;
    u16 beaconPeriod;
    u8 unk_1a[0x32 - 0x1a];
    u16 channel;
    u16 parentMaxSize;
    u16 childMaxSize;

} WMParentParam;
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
extern void unkfunc_02121100(int code);
extern void unkfunc_0212115c(void *arg);
extern BOOL unkfunc_021211c0();
extern BOOL unkfunc_02121258();
extern u16 (*data_02129edc)(u16 *wepKey, const WMParentParam *param);
void unkfunc_021210f0(int state);
void unkfunc_02121100(int code);
#pragma thumb off
void unkfunc_0212115c(void *arg) {
    WMCallback *cb = (WMCallback *) arg;
    if (cb->errcode != 0) {
        unkfunc_02121100(cb->errcode);
        unkfunc_021210f0(WH_SYSSTATE_ERROR);
        return;
    }
    if (data_02129edc != 0) {
        if (!unkfunc_021211c0()) {
            unkfunc_021210f0(WH_SYSSTATE_ERROR);
        }
    } else {
        if (!unkfunc_02121258()) {
            unkfunc_021210f0(WH_SYSSTATE_ERROR);
        }
    }
}
BOOL unkfunc_021211c0();
BOOL unkfunc_02121258();
