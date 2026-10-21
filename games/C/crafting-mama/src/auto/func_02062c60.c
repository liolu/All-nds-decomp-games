#include "m2c.h"

M2C_UNK func_02003710(s32, s32, s32);               /* extern */
M2C_UNK func_020339a0(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020659f0(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_02090740;
extern M2C_UNK data_02090744;

void func_02062c60(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 == NULL) {
        return;
    }
    func_02003710(M2C_FIELD(&data_02090740, s32 *, 0xC), M2C_FIELD(&data_02090740, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
    func_020339a0(&data_02090744, arg1);
    func_020659f0(0, arg2);
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
}
