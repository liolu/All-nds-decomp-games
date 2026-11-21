#include "m2c.h"

M2C_UNK func_0203ba58(s32 *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020a0ce0(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020ba5ac;
extern s32 data_020d3274;
extern s32 data_020d3284;
extern M2C_UNK data_020d3d40;
extern M2C_UNK func_020a0d74;

s32 func_020a4230(void) {
    if (!(data_020d3284 & 1)) {
        data_020d3274 = 0;
        func_0203ba58(&data_020d3274, &func_020a0d74, &data_020d3d40);
        data_020d3284 |= 1;
    }
    if (data_020d3274 == 0) {
        data_020d3274 = func_020a0ce0(&data_020ba5ac);
    }
    return data_020d3274;
}
