#include "m2c.h"

M2C_UNK func_020d6548();                            /* extern */
M2C_UNK func_020d6654(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_021e40a0;
extern M2C_UNK func_020ddad0;

void func_020ddaa4(void) {
    func_020d6548();
    func_020d6654(0xE, &func_020ddad0);
    M2C_FIELD(&data_021e40a0, s32 *, 4) = 0;
}
