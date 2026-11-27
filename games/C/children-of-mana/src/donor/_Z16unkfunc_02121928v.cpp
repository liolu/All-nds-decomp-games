/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* _Z16unkfunc_02121928v from https://github.com/GoldieLeGenie/DQIV-DECOMP src/ov002/mp/UnkWH.cpp (license: none), reused by
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
extern WMErrCode func_02061820(void (*callback)(void *arg));
}
extern void unkfunc_02121100(int code);
extern BOOL unkfunc_02121928();
extern void unkfunc_02121950(void *arg);
void unkfunc_02121100(int code);
#pragma thumb off
BOOL unkfunc_02121928() {
    WMErrCode result = func_02061820(unkfunc_02121950);
    if (result == 0x2) {
        return 1;
    }
    unkfunc_02121100(result);
    return 0;
}
void unkfunc_02121950(void *arg);
