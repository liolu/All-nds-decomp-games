#include "m2c.h"

M2C_UNK func_0203b29c();                            /* extern */
M2C_UNK func_0203b3a8(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0203b3f4(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_0215de44;
extern M2C_UNK func_02038efc;

void func_02038ea8(void) {
    if (M2C_FIELD(&data_0215de44, u16 *, 2) != 0) {
        return;
    }
    M2C_FIELD(&data_0215de44, u16 *, 2) = 1U;
    func_0203b29c();
    do {

    } while (func_0203b3f4(0xC, 1) == 0);
    func_0203b3a8(0xC, &func_02038efc);
}
