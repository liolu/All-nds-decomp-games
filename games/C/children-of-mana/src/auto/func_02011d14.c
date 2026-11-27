/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02011d14(void *arg0, void *arg1) {
    M2C_FIELD(arg0, u16 *, 8)   = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, u16 *, 0xA) = (u16) M2C_FIELD(arg1, u16 *, 6);
    if (M2C_FIELD(arg1, u16 *, 6) == 0) {
        M2C_FIELD(arg0, u16 *, 4) = (u16) M2C_FIELD(arg1, u16 *, 0);
        M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(arg1, u16 *, 2);
    }
}
