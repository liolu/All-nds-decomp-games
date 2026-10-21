#include "m2c.h"

M2C_UNK func_0200d9a8();                            /* extern */
M2C_UNK func_0200d9e8();                            /* extern */
M2C_UNK func_02019d9c();                            /* extern */

void func_0205c240(s32 arg0) {
    func_02019d9c();
    if (arg0 == 1) {
        func_0200d9e8();
        *(s32 *) 0x04001000 |= 0x10000;
        return;
    }
    func_0200d9a8();
    *(M2C_UNK *) 0x04001000 = (s32) (*(M2C_UNK *) 0x04001000 & ~0x10000);
}
