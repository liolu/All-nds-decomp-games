/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020a2318(void *arg0, u8 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x498) == arg1) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x498) = arg1;
    if (M2C_FIELD(arg0, u8 *, 0x498) != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0x240)(arg0);
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0x23C)(arg0);
}
