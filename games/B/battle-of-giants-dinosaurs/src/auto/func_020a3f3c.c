#include "m2c.h"

M2C_UNK func_0203ba58(s32 *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020a0ce0(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020ba634;
extern s32 data_020d3328;
extern s32 data_020d3338;
extern M2C_UNK data_020d3d4c;
extern M2C_UNK func_020a0d74;

s32 func_020a3f3c(void) {
    if (!(data_020d3338 & 1)) {
        data_020d3328 = 0;
        func_0203ba58(&data_020d3328, &func_020a0d74, &data_020d3d4c);
        data_020d3338 |= 1;
    }
    if (data_020d3328 == 0) {
        data_020d3328 = func_020a0ce0(&data_020ba634);
    }
    return data_020d3328;
}
