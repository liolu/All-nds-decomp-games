/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206f6a4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0206f6a4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern s32 data_020ff0b8;
extern u8 *func_02060830(void);
extern s32 func_0205eb1c(u8 *p, s32 x, u16 *a, u32 b);
extern s32 func_0205ebe8(u8 *p, s32 x, u16 *a, u32 b);
extern s32 func_0205e928(u8 *p, s32 x, u16 *a, u32 b);
extern s32 func_0205eb80(u8 *p, s32 x, u16 *a, u32 b);
extern s32 func_0205e724(u8 *p, u16 *a, u32 b);
extern s32 func_0205e4bc(u8 *p, u16 *a, u32 b);
extern s32 func_0205e9cc(u8 *p, s32 x, u16 *a, u32 b);
extern s32 func_0205e888(u8 *p, s32 x, u16 *a, u32 b);
extern void func_0205fdf8(u16 *a, u32 v, s32 z);
s32 func_02060368(u16 *param_1, u32 param_2) {
    u8 *p5;
    s32 x;
    s32 i;

    p5 = func_02060830();
    x  = data_020ff0b8;
    for (;;) {
        x = x + 1;
        if (x > 15) {
            x = 1;
        }
        if (func_0205eb1c(p5, x, param_1, param_2)) {
            data_020ff0b8 = x;
            return;
        }
        if (func_0205ebe8(p5, x, param_1, param_2)) {
            data_020ff0b8 = x;
            return;
        }
        if (func_0205e928(p5, x, param_1, param_2)) {
            data_020ff0b8 = x;
            return;
        }
        if (func_0205eb80(p5, x, param_1, param_2)) {
            data_020ff0b8 = x;
            return;
        }
        if (x == data_020ff0b8) {
            break;
        }
    }
    if (func_0205e724(p5, param_1, param_2)) {
        return;
    }
    if (func_0205e4bc(p5, param_1, param_2)) {
        return;
    }
    x = data_020ff0b8;
    for (;;) {
        x = x + 1;
        if (x > 15) {
            x = 1;
        }
        if (func_0205e9cc(p5, x, param_1, param_2)) {
            data_020ff0b8 = x;
            return;
        }
        if (x == data_020ff0b8) {
            break;
        }
    }
    for (i = 1; i < 16; i++) {
        if (func_0205e888(p5, i, param_1, param_2)) {
            return;
        }
    }
    func_0205fdf8(param_1, 0xfffe, 0);
}
