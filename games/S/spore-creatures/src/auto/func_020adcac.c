#include "m2c.h"

M2C_UNK func_020adf34(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_020e02b4;

void *func_020adcac(void *arg0, s16 arg1) {
    func_020adf34(arg0, 0xA);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e02b4;
    M2C_FIELD(arg0, s32 *, 0x38)   = 0;
    M2C_FIELD(arg0, s16 *, 0x3C)   = arg1;
    return arg0;
}
