/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206e788 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0206e788.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed int s32;
extern u32 func_0206086c(void);
extern u64 _s32_div_f(u32 a, u32 b);
extern void func_0205a328(u16 *dst, u16 *src, u32 n);
s32 func_0205f44c(u32 *param_1, s32 param_2, u16 *param_3) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u64 uVar4;

    uVar1 = func_0206086c();
    uVar3 = param_1[6];
    if (param_2 < (s32) param_1[1]) {
        if (param_2 == (s32) param_1[1] - 1) {
            uVar4 = _s32_div_f(param_1[0], uVar1);
            uVar2 = (u32) (uVar4 >> 32);
            if (uVar2 != 0) {
                func_0205a328(param_3, (u16 *) (param_2 * uVar1 + uVar3), uVar2);
            } else {
                func_0205a328(param_3, (u16 *) (param_2 * uVar1 + uVar3), uVar1);
            }
        } else {
            func_0205a328(param_3, (u16 *) (param_2 * uVar1 + uVar3), uVar1);
        }
    } else {
        return 0;
    }
    return 1;
}
