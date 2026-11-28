/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207bc58 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/spi/pm.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
extern void func_02024694(u32 count);
typedef void (*UnkPmCallback)(u32 result, void *arg);
extern u32 func_02027be8(u32 data, UnkPmCallback callback, void *arg);
extern u32 func_020279c4(u32 target, u32 on);
extern u32 func_02027860(BOOL *top, BOOL *bottom);
extern BOOL func_020274e0(u32 sw);
extern u32 func_020274c4(void);
u32 func_02027be8(u32 data, UnkPmCallback callback, void *arg);
u32 func_020279c4(u32 target, u32 on);
u32 func_02027914(UnkPmCallback callback, void *arg) {
    BOOL top;
    BOOL bottom;

    func_02024694(0x996a00);
    if (func_020274c4() != 1) {
        func_02027860(&top, &bottom);
        if (top) {
            func_020279c4(0, 0);
        }
        if (bottom) {
            func_020279c4(1, 0);
        }
        while (!func_020274e0(1)) {
            func_02024694(0x996a00);
        }
    }
    return func_02027be8(14, callback, arg);
}
u32 func_02027860(BOOL *top, BOOL *bottom);
BOOL func_020274e0(u32 sw);
u32 func_020274c4(void);
