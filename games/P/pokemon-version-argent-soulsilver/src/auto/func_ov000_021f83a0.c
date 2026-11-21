#include "m2c.h"
void func_ov000_021ec26c(s32, s32);
s32 func_ov000_021ee588(void);
void func_ov000_021ef3e0(s32, s32);
void func_ov000_021f0258(s32, s32);
void func_ov000_021f2f04(s32, s32);
u32 func_ov000_021f83a0(u32 arg0) {
    s32 b;
    s32 a;
    if (arg0 == 0) {
        return 0U;
    }
    switch (arg0) {
        case 1:
            a = 6;
            b = -0x32;
            break;
        case 2:
            a = 6;
            b = -0x3C;
            break;
        case 3:
            a = 6;
            b = -0x1E;
            break;
        case 4:
            a = 6;
            b = -0x50;
            break;
        case 5:
            a = 6;
            b = -0x14;
            break;
    }
    switch (func_ov000_021ee588()) {
        case 2:
            func_ov000_021ef3e0(a, b - 0xFA00);
            break;
        case 4:
            func_ov000_021f0258(a, b - 0x12110);
            break;
        case 5:
            func_ov000_021f2f04(a, b - 0x14820);
            break;
        default:
            func_ov000_021ec26c(a, b - 0x16F30);
            break;
    }
    return arg0;
}
