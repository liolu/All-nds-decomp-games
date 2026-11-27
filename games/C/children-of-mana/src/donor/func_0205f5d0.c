/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206e90c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0206e90c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
extern s32 func_0206086c(void);
extern s32 func_02060694(s32 a);
extern void func_0205a294(u32 *p, u32 v, u32 w);
void func_0205f5d0(s32 *param_1, s32 param_2, u32 *param_3, s32 param_4) {
    s32 d;

    d          = func_0206086c();
    param_1[0] = param_2;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = param_2 / d + (param_2 % d != 0);
    param_1[5] = (s32) param_3;
    param_1[6] = param_4;
    func_0205a294(param_3, 0, func_02060694(param_2));
}
