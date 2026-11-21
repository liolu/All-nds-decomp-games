#include "m2c.h"

M2C_UNK func_0203ba58(s32 *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020a0ce0(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020ba5cc;
extern s32 data_020d329c;
extern s32 data_020d32ac;
extern M2C_UNK data_020d3d64;
extern M2C_UNK func_020a0d74;

s32 func_020a4380(void) {
    if (!(data_020d32ac & 1)) {
        data_020d329c = 0;
        func_0203ba58(&data_020d329c, &func_020a0d74, &data_020d3d64);
        data_020d32ac |= 1;
    }
    if (data_020d329c == 0) {
        data_020d329c = func_020a0ce0(&data_020ba5cc);
    }
    return data_020d329c;
}
