#include "m2c.h"

M2C_UNK func_0203ba58(s32 *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020a0ce0(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020ba624;
extern s32 data_020d3314;
extern s32 data_020d3324;
extern M2C_UNK data_020d3dc4;
extern M2C_UNK func_020a0d74;

s32 func_020a3e94(void) {
    if (!(data_020d3324 & 1)) {
        data_020d3314 = 0;
        func_0203ba58(&data_020d3314, &func_020a0d74, &data_020d3dc4);
        data_020d3324 |= 1;
    }
    if (data_020d3314 == 0) {
        data_020d3314 = func_020a0ce0(&data_020ba624);
    }
    return data_020d3314;
}
