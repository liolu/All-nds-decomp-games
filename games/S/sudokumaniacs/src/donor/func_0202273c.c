/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020116f4 from projets/code-lyoko/src/auto/func_020116f4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
extern void func_0201e414(u32 count);
typedef void (*UnkPmCallback)(u32 result, void *arg);
extern u32 func_02022acc(u32 data, UnkPmCallback callback, void *arg);
extern u32 func_020227ec(u32 target, u32 on);
extern u32 func_02022658(BOOL *top, BOOL *bottom);
extern BOOL func_020222d8(u32 sw);
extern u32 func_020222bc(void);
extern u32 func_02022acc(u32 data, UnkPmCallback callback, void *arg);
extern u32 func_020227ec(u32 target, u32 on);
u32 func_0202273c(UnkPmCallback callback, void *arg) {
    BOOL top;
    BOOL bottom;

    func_0201e414(0x996a00);
    if (func_020222bc() != 1) {
        func_02022658(&top, &bottom);
        if (top) {
            func_020227ec(0, 0);
        }
        if (bottom) {
            func_020227ec(1, 0);
        }
        while (!func_020222d8(1)) {
            func_0201e414(0x996a00);
        }
    }
    return func_02022acc(14, callback, arg);
}
extern u32 func_02022658(BOOL *top, BOOL *bottom);
extern BOOL func_020222d8(u32 sw);
extern u32 func_020222bc(void);
