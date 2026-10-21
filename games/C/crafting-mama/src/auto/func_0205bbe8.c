#include "m2c.h"

M2C_UNK func_02010518();                            /* extern */
M2C_UNK func_0201052c();                            /* extern */
M2C_UNK func_02010540();                            /* extern */
M2C_UNK func_02010564();                            /* extern */
M2C_UNK func_02010588();                            /* extern */
M2C_UNK func_0201059c();                            /* extern */
M2C_UNK func_020105b0();                            /* extern */
M2C_UNK func_020105c4();                            /* extern */
M2C_UNK func_020105d8();                            /* extern */
M2C_UNK func_020105ec();                            /* extern */
M2C_UNK func_02010600();                            /* extern */
M2C_UNK func_02010614();                            /* extern */
M2C_UNK func_0201063c();                            /* extern */
M2C_UNK func_02030f4c();                            /* extern */
M2C_UNK func_0205bb70();                            /* extern */

void func_0205bbe8(void) {
    func_020105c4();
    func_02010518();
    func_02010540();
    func_020105b0();
    func_020105d8();
    func_0201052c();
    func_02010564();
    func_020105ec();
    func_02010614();
    func_02010600();
    func_0201063c();
    func_02010588();
    func_0201059c();
    func_0205bb70();
    *(s16 *) 0x05000000 = 0x7FFF;
    *(s16 *) 0x05000400 = 0x7FFF;
    func_02030f4c();
}
