#include "m2c.h"

M2C_UNK func_02059724();                            /* extern */
extern M2C_UNK data_020e14c8;
extern s32 data_020efc54;

void *func_020596e0(void *arg0) {
    func_02059724();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e14c8;
    M2C_FIELD(arg0, s8 *, 4)       = 0;
    M2C_FIELD(arg0, s8 *, 5)       = 0;
    M2C_FIELD(arg0, s8 *, 6)       = 7;
    M2C_FIELD(arg0, s32 *, 8)      = (s32) data_020efc54;
    return arg0;
}
