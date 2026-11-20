#include "m2c.h"

s32 func_020c8664();                                /* extern */
u8 func_020cd9ac(M2C_UNK);                          /* extern */
extern M2C_UNK data_02175a4c;
extern M2C_UNK data_02180a4c;

void func_0203a5cc(void) {
    if (func_020c8664() != 0) {
        M2C_FIELD(&data_02180a4c, u8 *, 0x57A) = (u8) M2C_FIELD(&data_02175a4c, u8 *, 0x209);
        return;
    }
    M2C_FIELD(&data_02180a4c, u8 *, 0x57A) = func_020cd9ac(0x100);
}
