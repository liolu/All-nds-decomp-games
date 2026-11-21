#include "m2c.h"

typedef struct G {
    u8 pad0[4];
    s32 *f4;
    u8 pad1[5];
    u8 fD;
    u8 pad2[7];
    u8 f15;
    u8 pad3[0x186];
    s32 f19C;
    s32 f1A0;
    u8 pad4[4];
    u8 f1A8;
    u8 f1A9;
    u8 pad5[0x46];
    s64 f1F0;
    u8 pad6[0x10];
    s32 f208;
    u8 pad7[0xC4];
    s8 f2D0;
} G;

s64 func_020d34b0(void);
void func_ov000_0220d258(s32);
void func_ov000_022101bc(s32);
s32 func_ov000_021ee588(void);
void func_ov000_021f958c(s32);
G *func_ov000_021f957c(void);
void func_ov000_021f7018(void);
void func_ov000_021f6ee4(s32);
void func_ov000_021f2f04(s32, s32);

s32 func_ov000_021f31b4(s32 arg0, s32 arg1) {
    G *g;

    if (func_ov000_021ee588() != 5) {
        return 0;
    }
    if (func_ov000_021f957c()->f15 == 2) {
        return 1;
    }
    if (arg0 != 0) {
        func_ov000_021f2f04(arg0, arg1 + 0xFFFEC780);
        return 1;
    }
    func_ov000_021f957c()->f2D0 = 0;
    if (func_ov000_021f957c()->f1A9 == 1 || func_ov000_021f957c()->f1A8 == 1 || func_ov000_021f957c()->f1A8 == 2) {
        return 1;
    }
    if (func_ov000_021f957c()->f19C != 0) {
        func_ov000_022101bc(func_ov000_021f957c()->f19C);
        func_ov000_021f957c()->f19C = 0;
    }
    if (func_ov000_021f957c()->fD != 0) {
        if (func_ov000_021f957c()->f1A8 == 0) {
            func_ov000_021f957c()->f1A8 = 3;
            func_ov000_0220d258(*func_ov000_021f957c()->f4);
        }
    } else if (func_ov000_021f957c()->f15 == 3) {
        func_ov000_021f2f04(6, 0xFFFEC5D2);
    } else if (func_ov000_021f957c()->f208 != 0) {
        func_ov000_021f7018();
    } else if (func_ov000_021f957c()->f1A0 == 1) {
        func_ov000_021f958c(0x12);
        g       = func_ov000_021f957c();
        g->f1F0 = func_020d34b0();
    } else {
        func_ov000_021f6ee4(1);
    }
    return 1;
}
