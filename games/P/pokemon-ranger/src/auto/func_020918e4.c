/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020918e4(void *arg0, s32 arg1) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x5C0);
    if (temp_r2 == NULL) {
        return;
    }
    if (arg1 != 0) {
        M2C_FIELD(temp_r2, u8 *, 0x2AF) = (u8) (M2C_FIELD(temp_r2, u8 *, 0x2AF) | 1);
        return;
    }
    M2C_FIELD(temp_r2, u8 *, 0x2AF) = (u8) (M2C_FIELD(temp_r2, u8 *, 0x2AF) & ~1);
}
