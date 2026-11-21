#include "m2c.h"

M2C_UNK func_0203ba58(s32 *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020a0ce0(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020ba5fc;
extern s32 data_020d32d8;
extern s32 data_020d32e8;
extern M2C_UNK data_020d3d28;
extern M2C_UNK func_020a0d74;

s32 func_020a470c(void) {
    if (!(data_020d32e8 & 1)) {
        data_020d32d8 = 0;
        func_0203ba58(&data_020d32d8, &func_020a0d74, &data_020d3d28);
        data_020d32e8 |= 1;
    }
    if (data_020d32d8 == 0) {
        data_020d32d8 = func_020a0ce0(&data_020ba5fc);
    }
    return data_020d32d8;
}
