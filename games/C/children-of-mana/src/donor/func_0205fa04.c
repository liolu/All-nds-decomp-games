/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206ed40 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0206ed40.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern void func_0205a328(u16 *dst, u16 *src, u32 n);
extern void func_0205a294(u32 *dst, u32 v, u32 n);
s32 func_0205fa04(u16 *param_1, u16 param_2, u32 param_3, u32 param_4, u32 param_5, u16 *param_6, u32 param_7, ...) {
    u8 loc0[2];
    u16 loc2;
    u8 *q;

    loc0[0] = 7;
    loc2    = param_2;
    func_0205a328((u16 *) loc0, param_1, 1);
    q = (u8 *) param_1 + 1;
    func_0205a328(&loc2, (u16 *) q, 2);
    q = (u8 *) ((u32) q + 2);
    func_0205a328((u16 *) &param_3, (u16 *) q, 1);
    q = (u8 *) ((u32) q + 1);
    func_0205a328((u16 *) &param_4, (u16 *) q, 4);
    q = (u8 *) ((u32) q + 4);
    func_0205a328((u16 *) &param_5, (u16 *) q, 4);
    q = (u8 *) ((u32) q + 4);
    if (param_6 == 0) {
        func_0205a294((u32 *) q, 0, param_7);
    } else {
        func_0205a328(param_6, (u16 *) q, param_7);
    }
    return ((s32) q + (s32) param_7) - (s32) param_1;
}
