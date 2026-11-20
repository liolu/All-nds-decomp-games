#include "m2c.h"

M2C_UNK func_02008cd4();                            /* extern */
M2C_UNK func_02008de0(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_0214a280;
extern M2C_UNK func_0200fdc0;

void func_0200fd94(void) {
    func_02008cd4();
    func_02008de0(0xE, &func_0200fdc0);
    M2C_FIELD(&data_0214a280, s32 *, 4) = 0;
}
