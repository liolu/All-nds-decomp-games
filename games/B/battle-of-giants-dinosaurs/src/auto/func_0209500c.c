#include "m2c.h"

M2C_UNK func_020a4f4c();                            /* extern */
extern M2C_UNK data_020d3cc4;

s32 *func_0209500c(s32 *arg0) {
    *arg0 = M2C_FIELD(&data_020d3cc4, s32 *, 0xC);
    func_020a4f4c(arg0);
    return arg0;
}
