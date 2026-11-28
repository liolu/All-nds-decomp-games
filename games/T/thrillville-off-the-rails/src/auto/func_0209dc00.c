#include "m2c.h"

M2C_UNK func_0207432c();                            /* extern */
extern M2C_UNK data_020e398c;
extern s32 data_020fd2a0;

void *func_0209dc00(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e398c;
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_0207432c();
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    data_020fd2a0 = 0;
    return arg0;
}
