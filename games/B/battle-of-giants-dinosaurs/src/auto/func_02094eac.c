#include "m2c.h"

M2C_UNK func_0209ec48();                            /* extern */
extern M2C_UNK data_020b9288;
extern M2C_UNK data_020d3cc4;

M2C_UNK **func_02094eac(M2C_UNK **arg0) {
    func_0209ec48();
    *arg0                                       = &data_020b9288;
    M2C_FIELD(&data_020d3cc4, M2C_UNK ***, 0xC) = arg0;
    return arg0;
}
