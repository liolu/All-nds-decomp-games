#include "engine.h"
#include "m2c.h"

void func_020d47ec(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020bfac4(M2C_UNK, M2C_UNK);
void func_020bfc60(M2C_UNK, M2C_UNK);

extern s32 data_021da720;

void func_020bfcc8(s32 arg0) {
    u8 sp0[392];
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;

    if ((M2C_FIELD(arg0, s32 *, 0) & 0x10) == 0x10) {
        func_020d47ec(0, arg0 + 0x3C, 8);
        func_020d47ec(0, arg0 + 0x44, 8);
        func_020d47ec(0, arg0 + 0x4C, 8);
        temp_r1 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_r1 != 0) {
            func_020bfc60(arg0 + 0x3C, temp_r1);
        }
        temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_r1_2 != 0) {
            func_020bfc60(arg0 + 0x44, temp_r1_2);
        }
        temp_r1_3 = M2C_FIELD(arg0, s32 *, 0x18);
        if (temp_r1_3 != 0) {
            func_020bfc60(arg0 + 0x4C, temp_r1_3);
        }
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0x10);
    }
    if (data_021da720 != 0) {
        func_020bfac4(data_021da720, arg0);
        return;
    }
    data_021da720 = (s32) sp0;
    func_020bfac4((s32) sp0, arg0);
    data_021da720 = 0;
}
