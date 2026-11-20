/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02065688(void *arg0) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0x34);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, u8 *, 0x339) = (u8) ((M2C_FIELD(temp_r1, u8 *, 0x339) & ~0x38) | 0x10);
    }
}
