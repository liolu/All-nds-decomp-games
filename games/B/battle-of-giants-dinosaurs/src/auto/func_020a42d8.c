#include "m2c.h"

M2C_UNK func_0203ba58(s32 *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020a0ce0(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020ba5c0;
extern s32 data_020d3288;
extern s32 data_020d3298;
extern M2C_UNK data_020d3d88;
extern M2C_UNK func_020a0d74;

s32 func_020a42d8(void) {
    if (!(data_020d3298 & 1)) {
        data_020d3288 = 0;
        func_0203ba58(&data_020d3288, &func_020a0d74, &data_020d3d88);
        data_020d3298 |= 1;
    }
    if (data_020d3288 == 0) {
        data_020d3288 = func_020a0ce0(&data_020ba5c0);
    }
    return data_020d3288;
}
