#include "m2c.h"

M2C_UNK func_02066304(void *, M2C_UNK);             /* extern */
void *func_020702d4();                              /* extern */
s32 func_02070348(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_02070970(void) {
    void *temp_r1;
    void *temp_r4;

    temp_r4 = func_020702d4();
    if (func_02070348(2, 7, 8) != 0) {
        return 0;
    }
    func_02066304(M2C_FIELD(temp_r4, void **, 4) + 0xC, 4);
    temp_r1 = M2C_FIELD(temp_r4, void **, 4);
    if (M2C_FIELD(temp_r1, s32 *, 0xC) == 1) {
        return 0;
    }
    func_02066304(temp_r1 + 0x3C, 4);
    return (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), u16 *, 0x3C) + 0x1F) & ~0x1F;
}
