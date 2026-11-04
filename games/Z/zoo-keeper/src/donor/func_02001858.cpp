/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _Z16unkfunc_021215e8Pv from https://github.com/GoldieLeGenie/DQIV-DECOMP src/ov002/mp/UnkWH.cpp (license: none), reused by
 * tools/donor_match.py */
extern "C" {
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
}
extern "C" {
typedef u16 WMErrCode;
typedef struct WMCallback {
    u8 unk_00[0x02 - 0x00];
    WMErrCode errcode;
} WMCallback;
}
extern void unkfunc_02121100(int code);
extern void unkfunc_021215e8(void *arg);
extern BOOL unkfunc_02121618();
extern void unkfunc_02122840();
void unkfunc_02121100(int code);
#pragma thumb off
void unkfunc_021215e8(void *arg) {
    WMCallback *cb = (WMCallback *) arg;
    if (cb->errcode != 0) {
        unkfunc_02121100(cb->errcode);
        unkfunc_02122840();
        return;
    }
    if (!unkfunc_02121618()) {
        unkfunc_02122840();
    }
}
BOOL unkfunc_02121618();
void unkfunc_02122840();
