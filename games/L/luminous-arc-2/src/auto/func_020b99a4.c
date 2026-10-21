#include "m2c.h"

extern M2C_UNK data_02173dbc;
extern M2C_UNK data_02173dc0;

M2C_UNK *func_020b99a4(s32 arg0) {
    M2C_FIELD(&data_02173dbc, s32 *, 4) = arg0;
    return &data_02173dc0;
}
