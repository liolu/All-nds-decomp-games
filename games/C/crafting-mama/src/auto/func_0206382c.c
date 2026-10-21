#include "m2c.h"

M2C_UNK func_02047948(s32);                         /* extern */
M2C_UNK func_0205e6a8(s32);                         /* extern */
M2C_UNK func_02066044(s32);                         /* extern */

void func_0206382c(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_0205e6a8(arg0 + 0x44);
    func_02047948(arg0 + 0x48);
    func_02066044(arg0 + 0x3C);
}
