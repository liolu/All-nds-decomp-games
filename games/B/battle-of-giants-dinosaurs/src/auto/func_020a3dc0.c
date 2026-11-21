#include "m2c.h"

M2C_UNK func_0203ba58(s32 *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020a0ce0(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020bf1ac;
extern M2C_UNK data_020d3d70;
extern s32 data_020d45f8;
extern s32 data_020d4600;
extern M2C_UNK func_020a0d74;

s32 func_020a3dc0(void) {
    if (!(data_020d4600 & 1)) {
        data_020d45f8 = 0;
        func_0203ba58(&data_020d45f8, &func_020a0d74, &data_020d3d70);
        data_020d4600 |= 1;
    }
    if (data_020d45f8 == 0) {
        data_020d45f8 = func_020a0ce0(&data_020bf1ac);
    }
    return data_020d45f8;
}
