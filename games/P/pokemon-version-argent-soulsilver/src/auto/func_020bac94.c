#include "m2c.h"

M2C_UNK func_020b8928(s32);                         /* extern */
M2C_UNK func_020b8944(s32, M2C_UNK, s32);           /* extern */
extern M2C_UNK data_021da490;

void func_020bac94(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_r4;

    temp_r4 = (arg0 * 0x30) + M2C_FIELD(&data_021da490, s32 *, 8);
    func_020b8928(temp_r4);
    if (arg1 != -1) {
        func_020b8944(temp_r4, 0, arg1);
    }
    if (arg2 != -1) {
        func_020b8944(temp_r4, 1, arg2);
    }
    if (arg3 != -1) {
        func_020b8944(temp_r4, 2, arg3);
    }
    M2C_FIELD(temp_r4, s32 *, 0xC)  = arg4;
    M2C_FIELD(temp_r4, s32 *, 0x10) = arg5;
    M2C_FIELD(temp_r4, s32 *, 0x14) = arg6;
    M2C_FIELD(temp_r4, s32 *, 0x18) = arg7;
}
