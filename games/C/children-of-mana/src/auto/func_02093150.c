#include "m2c.h"

extern M2C_UNK data_02102fac;
extern M2C_UNK data_02102fbc;
extern M2C_UNK data_02102fcc;

M2C_UNK *func_02093150(void *arg0) {
    M2C_UNK *var_r0;
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x220);
    var_r0  = NULL;
    switch (temp_r1) {                              /* irregular */
        case 2:
            var_r0 = &data_02102fac;
        /* fallthrough */
        default:
            return var_r0;
        case 1:
            return &data_02102fbc;
        case 0:
            return &data_02102fcc;
    }
}
