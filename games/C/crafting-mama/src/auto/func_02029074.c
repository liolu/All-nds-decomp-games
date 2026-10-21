#include "m2c.h"

M2C_UNK func_0200d7ec();                            /* extern */
M2C_UNK func_0200d7f0();                            /* extern */
M2C_UNK func_0200d9a8();                            /* extern */
M2C_UNK func_02018b90();                            /* extern */
M2C_UNK func_02019434();                            /* extern */
M2C_UNK func_0201e3b8();                            /* extern */
M2C_UNK func_02024ca8();                            /* extern */

void func_02029074(void) {
    func_02018b90();
    func_0200d7ec();
    func_0200d7f0();
    func_02019434();
    func_02024ca8();
    func_0200d9a8();
    *(s32 *) 0x04001000 &= ~0x10000;
    func_0201e3b8();
}
