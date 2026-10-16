#include "m2c.h"

M2C_UNK func_020667e4();                            /* extern */
M2C_UNK func_020668f0(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_02090fe0;
extern M2C_UNK func_0206bb38;

void func_0206bb0c(void) {
    func_020667e4();
    func_020668f0(0xE, &func_0206bb38);
    M2C_FIELD(&data_02090fe0, s32 *, 4) = 0;
}
