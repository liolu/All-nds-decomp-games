#include "m2c.h"

M2C_UNK func_0203b2f8();                            /* extern */
M2C_UNK func_0203b3c8();                            /* extern */
M2C_UNK func_0203b470();                            /* extern */
M2C_UNK func_0203b518();                            /* extern */

void func_0203b2bc(s32 arg0) {
    if (arg0 & 1) {
        func_0203b2f8();
    }
    if (arg0 & 2) {
        func_0203b3c8();
    }
    if (arg0 & 4) {
        func_0203b470();
    }
    if (!(arg0 & 8)) {
        return;
    }
    func_0203b518();
}
