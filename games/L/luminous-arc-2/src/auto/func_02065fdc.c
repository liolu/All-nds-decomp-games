#include "m2c.h"

M2C_UNK func_02066c08();                            /* extern */
s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216ce68;

void func_02065fdc(void) {
    if (func_020cab60() != 3) {
        return;
    }
    func_02066c08();
    M2C_FIELD(&data_0216ce68, s8 *, 0xBA5) = 0x19;
}
