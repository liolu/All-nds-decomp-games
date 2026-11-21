#include "m2c.h"

M2C_UNK func_0203ba58(s32 *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020a0ce0(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020ba608;
extern s32 data_020d32ec;
extern s32 data_020d32fc;
extern M2C_UNK data_020d3d34;
extern M2C_UNK func_020a0d74;

s32 func_020a47b4(void) {
    if (!(data_020d32fc & 1)) {
        data_020d32ec = 0;
        func_0203ba58(&data_020d32ec, &func_020a0d74, &data_020d3d34);
        data_020d32fc |= 1;
    }
    if (data_020d32ec == 0) {
        data_020d32ec = func_020a0ce0(&data_020ba608);
    }
    return data_020d32ec;
}
