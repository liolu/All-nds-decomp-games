#include "m2c.h"

M2C_UNK func_0203ba58(s32 *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020a0ce0(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020bf130;
extern M2C_UNK data_020d3d7c;
extern s32 data_020d45fc;
extern s32 data_020d4604;
extern M2C_UNK func_020a0d74;

s32 func_020a3c30(void) {
    if (!(data_020d45fc & 1)) {
        data_020d4604 = 0;
        func_0203ba58(&data_020d4604, &func_020a0d74, &data_020d3d7c);
        data_020d45fc |= 1;
    }
    if (data_020d4604 == 0) {
        data_020d4604 = func_020a0ce0(&data_020bf130);
    }
    return data_020d4604;
}
