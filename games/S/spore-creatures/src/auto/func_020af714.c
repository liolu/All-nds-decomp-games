#include "m2c.h"

M2C_UNK func_020af870();                            /* extern */
extern M2C_UNK *data_020e0304;
extern M2C_UNK *data_020e0308;
extern M2C_UNK data_020f1860;
extern M2C_UNK func_020af76c;
extern M2C_UNK func_020af7fc;

void func_020af714(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(&data_020f1860, s32 *, 0xC)  = arg0;
    M2C_FIELD(&data_020f1860, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_020f1860, s32 *, 0x14) = arg2;
    M2C_FIELD(&data_020f1860, s32 *, 0x18) = arg3;
    func_020af870();
    if (arg4 == 0) {
        return;
    }
    data_020e0304 = &func_020af76c;
    data_020e0308 = &func_020af7fc;
}
