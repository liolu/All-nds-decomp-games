#include "m2c.h"

M2C_UNK func_020ba78c(M2C_UNK *);                   /* extern */
s32 func_020baa6c(M2C_UNK *, M2C_UNK *);            /* extern */
extern M2C_UNK data_020dfe0c;
extern M2C_UNK data_020e72f4;
extern M2C_UNK data_020e7308;

void func_02090ba0(void) {
    func_020ba78c(&data_020e7308);
    M2C_FIELD(&data_020e72f4, s8 *, 0x85) = 1;
    if (func_020baa6c(&data_020e7308, &data_020dfe0c) != 0) {
        M2C_FIELD(&data_020e72f4, s8 *, 0x84) = 1;
    }
    M2C_FIELD(&data_020e72f4, s8 *, 0x85) = 0;
}
