/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02032c58(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xA) == 1) {
        if (M2C_FIELD(arg0, u8 *, 0xA4) != 0) {
            M2C_FIELD(arg0, u8 *, 0x11) = (u8) M2C_FIELD(arg0, u8 *, 0xA5);
        } else {
            M2C_FIELD(arg0, u8 *, 0x11) = (u8) M2C_FIELD(arg0, u8 *, 0x72);
        }
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x11) = (u8) M2C_FIELD(arg0, u8 *, 0x72);
}
