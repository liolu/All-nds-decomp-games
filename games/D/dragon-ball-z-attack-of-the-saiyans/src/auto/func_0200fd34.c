#include "m2c.h"

M2C_UNK func_0207eea0();                            /* extern */

void func_0200fd34(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x780) = 0;
    func_0207eea0(arg0);
    M2C_FIELD(arg0, s32 *, 0x608) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x604) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x600) = 0x1000;
}
