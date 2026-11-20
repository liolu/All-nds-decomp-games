#include "m2c.h"

M2C_UNK func_02004180();                            /* extern */

void func_02002ec0(s32 arg0) {
    *(s32 *) 0x04000400 = 0x16;
    func_02004180(arg0);
}
