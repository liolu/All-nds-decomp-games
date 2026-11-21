#include "m2c.h"

M2C_UNK func_0203b91c(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0209c50c(void *);                      /* extern */
extern M2C_UNK data_020d3cc4;
extern M2C_UNK func_0209c5e8;
extern M2C_UNK func_0209c5f4;

void *func_02094e2c(void *arg0) {
    func_0203b91c(arg0, 2, 0xC8, &func_0209c5e8, &func_0209c5f4);
    M2C_FIELD(arg0, s32 *, 0x194)            = 0;
    M2C_FIELD(&data_020d3cc4, void **, 0x3C) = arg0;
    func_0209c50c(arg0);
    return arg0;
}
