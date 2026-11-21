#include "m2c.h"

M2C_UNK func_020a4f60();                            /* extern */
extern M2C_UNK data_020d3cc4;

s32 *func_02094fa4(s32 *arg0) {
    *arg0 = M2C_FIELD(&data_020d3cc4, s32 *, 0xC);
    func_020a4f60(arg0);
    return arg0;
}
