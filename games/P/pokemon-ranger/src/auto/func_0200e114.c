/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0200e114(void *arg0) {
    u16 temp_r1;

    if (M2C_FIELD(arg0, u16 *, 0x618) != 0) {
        M2C_FIELD(arg0, s8 *, 0x615) = 1;
        if (M2C_FIELD(arg0, u8 *, 0x616) == 0) {
            M2C_FIELD(arg0, u16 *, 0x618) = (u16) (M2C_FIELD(arg0, u16 *, 0x618) - 1);
        }
    } else {
        M2C_FIELD(arg0, s8 *, 0x615) = 0;
    }
    temp_r1 = M2C_FIELD(arg0, u16 *, 0x61A);
    if (temp_r1 != 0) {
        M2C_FIELD(arg0, u16 *, 0x61A) = (u16) (temp_r1 - 1);
    }
}
