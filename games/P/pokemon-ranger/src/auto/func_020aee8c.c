#include "m2c.h"

s32 func_020b20e8(s32);                             /* extern */
M2C_UNK func_020b2624(void *, s32, s32);            /* extern */
M2C_UNK func_020b2760(void *, s32, s32);            /* extern */
extern M2C_UNK data_020e3fa8;
extern M2C_UNK data_020e401c;
extern M2C_UNK data_020e7e2c;

void *func_020aee8c(void *arg0, s32 arg1) {
    s32 temp_r4;

    M2C_FIELD(arg0, volatile s32 *, 0x34) = func_020b20e8(arg1);
    temp_r4                               = M2C_FIELD(arg0, volatile s32 *, 0x34);
    func_020b2760(arg0, temp_r4, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0)       = &data_020e401c;
    M2C_FIELD(arg0, volatile s8 *, 0x20) = 4;
    M2C_FIELD(arg0, volatile s8 *, 0x21) = 0;
    M2C_FIELD(arg0, volatile s8 *, 0x22) = 1;
    M2C_FIELD(arg0, volatile s8 *, 0x23) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0)       = &data_020e3fa8;
    func_020b2624(arg0 + 0x24, temp_r4, arg1);
    M2C_FIELD(arg0, volatile s32 *, 0x2C) = temp_r4;
    M2C_FIELD(arg0, volatile s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, M2C_UNK **, 0)        = &data_020e7e2c;
    return arg0;
}
