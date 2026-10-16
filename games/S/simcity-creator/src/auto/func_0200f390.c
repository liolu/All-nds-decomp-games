#include "m2c.h"

M2C_UNK func_0200558c(void *, M2C_UNK);             /* extern */
void *func_0200ed44();                              /* extern */
s32 func_0200edb8(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_0200f390(void) {
    void *temp_r1;
    void *temp_r4;

    temp_r4 = func_0200ed44();
    if (func_0200edb8(2, 7, 8) != 0) {
        return 0;
    }
    func_0200558c(M2C_FIELD(temp_r4, void **, 4) + 0xC, 4);
    temp_r1 = M2C_FIELD(temp_r4, void **, 4);
    if (M2C_FIELD(temp_r1, s32 *, 0xC) == 1) {
        return 0;
    }
    func_0200558c(temp_r1 + 0x3C, 4);
    return (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), u16 *, 0x3C) + 0x1F) & ~0x1F;
}
