#include "m2c.h"

M2C_UNK func_020a5ea0(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020eae28;
extern M2C_UNK data_020eae34;

void func_020a5ec0(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_020eae28, s32 *, 0xC)  = arg0;
    M2C_FIELD(&data_020eae28, s32 *, 0x10) = arg1;
    func_020a5ea0(&data_020eae34);
}
