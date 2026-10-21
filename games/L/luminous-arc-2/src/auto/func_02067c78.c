#include "m2c.h"

M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020a2624();                            /* extern */
extern M2C_UNK data_0216ce68;

s32 func_02067c78(void) {
    M2C_FIELD(&data_0216ce68, s8 *, 0xBA4) = 0;
    func_020a2624();
    func_0206c4b4(3, 5, 0x7F, 0, 0xA, 0x100);
    return 1;
}
