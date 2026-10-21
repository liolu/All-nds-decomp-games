#include "m2c.h"

M2C_UNK func_0205def4();                            /* extern */
s32 func_020cab60();                                /* extern */
extern M2C_UNK data_0216bc68;

s32 func_0205ab68(void) {
    if (func_020cab60() != 3) {
        return 0xFFFF;
    }
    func_0205def4();
    M2C_FIELD(&data_0216bc68, u8 *, 0xA) = (u8) (M2C_FIELD(&data_0216bc68, u8 *, 0xA) + 1);
    return 0xFFFE;
}
