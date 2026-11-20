#include "m2c.h"

M2C_UNK func_020b6918();                            /* extern */
extern M2C_UNK *data_02110944;
extern M2C_UNK *data_02110948;
extern M2C_UNK data_021d8504;
extern M2C_UNK func_020b6814;
extern M2C_UNK func_020b68a4;

void func_020b67bc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(&data_021d8504, s32 *, 0xC)  = arg0;
    M2C_FIELD(&data_021d8504, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_021d8504, s32 *, 0x14) = arg2;
    M2C_FIELD(&data_021d8504, s32 *, 0x18) = arg3;
    func_020b6918();
    if (arg4 == 0) {
        return;
    }
    data_02110944 = &func_020b6814;
    data_02110948 = &func_020b68a4;
}
