#include "m2c.h"

M2C_UNK func_020831e8(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020a0780;
extern M2C_UNK data_020a07b8;

void func_02009a18(M2C_UNK arg0, s16 arg1, s32 arg2) {
    func_020831e8(arg0, &data_020a07b8, 0x1000);
    M2C_FIELD(&data_020a0780, s16 *, 0x30) = arg1;
    M2C_FIELD(&data_020a0780, s32 *, 0x34) = arg2;
}
