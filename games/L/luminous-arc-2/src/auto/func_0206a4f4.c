#include "m2c.h"

s32 func_0206751c();                                /* extern */
M2C_UNK func_0207aa14();                            /* extern */
extern M2C_UNK data_0216ce68;

void func_0206a4f4(void) {
    if (func_0206751c() == 0) {
        return;
    }
    func_0207aa14();
    M2C_FIELD(&data_0216ce68, u8 *, 0xBB4) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBB4) + 1);
}
