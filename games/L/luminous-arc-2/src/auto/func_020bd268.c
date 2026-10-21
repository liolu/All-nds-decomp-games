#include "engine.h"
#include "m2c.h"

M2C_UNK func_020babc0(M2C_UNK);
void func_020babd0(M2C_UNK, M2C_UNK);
void func_020babe8(M2C_UNK, M2C_UNK);
void func_020bac18(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020bbd8c(M2C_UNK);
M2C_UNK func_020bd1f4(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0212ed24;

s32 func_020bd268(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s16 sp0;
    s32 var_r0;
    s32 var_r0_2;
    u16 temp_r1_2;
    void *temp_r1;

    sp0 = arg2 - M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x44);
    if (func_020babc0(arg0 + 0x50) < arg2) {
        if (func_020bbd8c(arg0) == 0) {
            var_r0_2 = 0;
        } else {
            var_r0_2          = 1;
            *(M2C_UNK *) arg3 = 1;
        }
        return var_r0_2;
    }
    if (func_020bd1f4(arg0, (s32) M2C_FIELD(arg0, u16 *, 0x64), arg2) == 0) {
        if (func_020bbd8c(arg0) == 0) {
            var_r0 = 0;
        } else {
            var_r0            = 1;
            *(M2C_UNK *) arg3 = 1;
        }
        return var_r0;
    }
    temp_r1 = M2C_FIELD(arg0, void **, 8);
    if (M2C_FIELD(temp_r1, s32 *, 0x40) == 2) {
        func_020bac18(arg0 + 0x50, (s32) &sp0, M2C_FIELD(temp_r1, s32 *, 0x44));
    }
    func_020bac18(arg0 + 0x50, (s32) &data_0212ed24, 2);
    func_020babd0(arg0 + 0x50, (s32) (u8) arg1);
    temp_r1_2                    = M2C_FIELD(arg0, u16 *, 0x64);
    M2C_FIELD(arg0, u16 *, 0x64) = (u16) (temp_r1_2 + 1);
    func_020babe8(arg0 + 0x50, (s32) temp_r1_2);
    func_020babe8(arg0 + 0x50, (s32) M2C_FIELD(arg0, u16 *, 0x66));
    *(M2C_UNK *) arg3 = 0;
    return 1;
}
