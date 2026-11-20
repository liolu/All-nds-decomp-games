/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u8 data_020d027c;

void func_02028af0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1C) == 1) {
        return;
    }
    if (data_020d027c != 0) {
        return;
    }
    M2C_FIELD(arg0, M2C_UNK(**)(), 0x28)();
}
