#include "m2c.h"

s32 func_020b2818();                                /* extern */
extern M2C_UNK data_020f18b0;

void func_020b3efc(void) {
    M2C_FIELD(&data_020f18b0, s32 *, 0x18) = func_020b2818();
}
