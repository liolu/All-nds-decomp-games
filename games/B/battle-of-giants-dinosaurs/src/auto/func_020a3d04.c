#include "m2c.h"

M2C_UNK func_0203ba58(s32 *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020a0ce0(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020b6358;
extern s32 data_020d1054;
extern s32 data_020d1058;
extern M2C_UNK data_020d3da0;
extern M2C_UNK func_020a0d74;

s32 func_020a3d04(void) {
    if (!(data_020d1054 & 1)) {
        data_020d1058 = 0;
        func_0203ba58(&data_020d1058, &func_020a0d74, &data_020d3da0);
        data_020d1054 |= 1;
    }
    if (data_020d1058 == 0) {
        data_020d1058 = func_020a0ce0(&data_020b6358);
    }
    return data_020d1058;
}
