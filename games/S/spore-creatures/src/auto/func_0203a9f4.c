#include "m2c.h"

s32 func_02062560();                                /* extern */
M2C_UNK func_02066fa4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02067944();                            /* extern */
extern M2C_UNK data_020decf8;

M2C_UNK **func_0203a9f4(M2C_UNK **arg0) {
    *arg0 = &data_020decf8;
    if (func_02062560() == 0) {
        func_02066fa4(0x4C, 0);
        func_02067944();
    }
    return arg0;
}
