#include "m2c.h"

M2C_UNK func_0203ba58(s32 *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020a0ce0(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020ba5e8;
extern s32 data_020d32c4;
extern s32 data_020d32d4;
extern M2C_UNK data_020d3d58;
extern M2C_UNK func_020a0d74;

s32 func_020a4664(void) {
    if (!(data_020d32d4 & 1)) {
        data_020d32c4 = 0;
        func_0203ba58(&data_020d32c4, &func_020a0d74, &data_020d3d58);
        data_020d32d4 |= 1;
    }
    if (data_020d32c4 == 0) {
        data_020d32c4 = func_020a0ce0(&data_020ba5e8);
    }
    return data_020d32c4;
}
