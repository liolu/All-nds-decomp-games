/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02017ecc(void **arg0, u8 *arg1) {
    u8 temp_r2;

    temp_r2 = *arg1;
    if (((u32) (temp_r2 << 0x1E) >> 0x1F) != 0) {
        return;
    }
    if (((u32) (temp_r2 << 0x19) >> 0x1F) != 0) {
        M2C_FIELD(*arg0, M2C_UNK(**)(), 0x20)(arg0);
        return;
    }
    if (((u32) (temp_r2 << 0x18) >> 0x1F) == 0) {
        return;
    }
    M2C_FIELD(*arg0, M2C_UNK(**)(), 0x24)(arg0);
}
