#include "m2c.h"

s32 func_020c4684();                                /* extern */
s32 func_020c9048(u8);                              /* extern */
extern u8 data_02158048;
extern M2C_UNK data_0217aa4c;

void func_0203a444(void) {
    if (func_020c9048(M2C_FIELD(&data_0217aa4c, u8 *, 0xB3E)) != 0) {
        if (func_020c4684() == 0) {
            return;
        }
        data_02158048 += 1;
        return;
    }
    data_02158048 += 1;
}
