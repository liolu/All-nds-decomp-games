#include "m2c.h"

void *func_02070fc8();                              /* extern */
extern M2C_UNK data_0216fdb8;

s32 func_020702a8(s32 arg0) {
    void *temp_r0;

    if (M2C_FIELD(&data_0216fdb8, u8 *, 4) == 0) {
        return -0x5A;
    }
    temp_r0 = func_02070fc8(arg0);
    if (temp_r0 == NULL) {
        return -0xB1;
    }
    if (M2C_FIELD(temp_r0, u8 *, 4) == 0) {
        return 0;
    }
    return M2C_FIELD(temp_r0, s32 *, 0);
}
