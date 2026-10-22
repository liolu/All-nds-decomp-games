#include "m2c.h"

M2C_UNK func_02057300();                            /* extern */
M2C_UNK func_020573b4(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02057400(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020b3024;
extern M2C_UNK func_020571c8;

void func_02057174(void) {
    if (M2C_FIELD(&data_020b3024, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_020b3024, u16 *, 2) = 1U;
    func_02057300();
    do {

    } while (func_02057400(0xC, 1) == 0);
    func_020573b4(0xC, &func_020571c8);
}
