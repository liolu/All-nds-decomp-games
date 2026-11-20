#include "m2c.h"

M2C_UNK func_020049b8(M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
s32 func_0201b47c(s32);                             /* extern */
s32 func_0201b764(s32, M2C_UNK *);                  /* extern */
s32 func_02081730(void *, M2C_UNK *, M2C_UNK *);    /* extern */
extern M2C_UNK data_0211c3f8;
extern M2C_UNK data_0211c404;
extern M2C_UNK data_0211c40c;
extern M2C_UNK data_0211c414;
extern M2C_UNK data_0211c418;

s32 func_02080f24(void *arg0) {
    u8 sp0[8];
    s32 temp_r0;

    if (func_02081730(arg0, &data_0211c3f8, &data_0211c404) != 0) {
        return 1;
    }
    temp_r0 = func_0201b47c(func_0201b764(M2C_FIELD(arg0, s32 *, 0x19F8), &data_0211c40c) + 4);
    if (temp_r0 != 0) {
        func_020049b8(sp0, 7, &data_0211c414, temp_r0);
        if (func_02081730(arg0, &data_0211c418, sp0) != 0) {
            return 1;
        }
    }
    return 0;
}
