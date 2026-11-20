#include "m2c.h"

M2C_UNK func_0203b29c();                            /* extern */
M2C_UNK func_0203b3a8(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK data_021604a0;
extern M2C_UNK func_02041a4c;

void func_02041a20(void) {
    func_0203b29c();
    func_0203b3a8(0xE, &func_02041a4c);
    M2C_FIELD(&data_021604a0, s32 *, 4) = 0;
}
