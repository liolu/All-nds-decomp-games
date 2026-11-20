#include "m2c.h"

M2C_UNK func_020b7f44(M2C_UNK *, M2C_UNK *);        /* extern */
s32 func_020b7ff0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_020df4b8;
extern M2C_UNK func_020b0af4;
extern M2C_UNK func_020b0b00;

s32 func_020b0aa8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_020b7f44(&func_020b0b00, &func_020b0af4);
    if (func_020b7ff0(arg0, arg1, arg2, &data_020df4b8) != 0) {
        return 1;
    }
    return 0;
}
