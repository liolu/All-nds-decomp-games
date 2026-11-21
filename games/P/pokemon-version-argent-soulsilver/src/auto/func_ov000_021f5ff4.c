#include "m2c.h"
s64 func_020d34b0(void);
void func_ov000_021f958c(s32);
u8 *func_ov000_021f957c(void);
s32 func_ov000_021f830c(void);
void func_ov000_021f5d2c(s32, s32, s32);
s32 func_ov000_021f5b50(void);
void func_ov000_021f3d18(s32);
void func_ov000_021f2f04(s32, s32);
s32 func_ov000_021f5ff4(s32 arg0) {
    u8 *temp_r4;

    *(s32 *) (func_ov000_021f957c() + 0x208) = 0;
    *(s32 *) (func_ov000_021f957c() + 0x204) = 0;
    *(u8 *) (func_ov000_021f957c() + 0x1A7)  = 0;
    temp_r4                                  = func_ov000_021f957c();
    *(s64 *) (temp_r4 + 0x1CC)               = func_020d34b0();
    if (func_ov000_021f957c()[0x15] == 0) {
        func_ov000_021f958c(3);
        func_ov000_021f3d18(0);
        if (func_ov000_021f830c() != 0) {
            return 0;
        }
    } else if (func_ov000_021f957c()[0x15] == 1) {
        func_ov000_021f5d2c(0, 0, arg0);
        if (func_ov000_021f5b50() != 0) {
            return 0;
        }
    } else if (func_ov000_021f957c()[0x15] == 3) {
        func_ov000_021f2f04(6, 0xFFFEC5E6);
        return 0;
    }
    return 1;
}
