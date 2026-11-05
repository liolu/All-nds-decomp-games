#include "m2c.h"

M2C_UNK func_020b6c80();                            /* extern */
extern M2C_UNK *data_0211094c;
extern M2C_UNK *data_02110950;
extern M2C_UNK data_021d8520;
extern M2C_UNK func_020b6b70;
extern M2C_UNK func_020b6c3c;

void func_020b6b1c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(&data_021d8520, s32 *, 8)    = arg0;
    M2C_FIELD(&data_021d8520, s32 *, 0xC)  = arg1;
    M2C_FIELD(&data_021d8520, s32 *, 0x10) = arg2;
    func_020b6c80();
    if (arg3 == 0) {
        return;
    }
    data_0211094c = &func_020b6b70;
    data_02110950 = &func_020b6c3c;
}
