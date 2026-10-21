#include "m2c.h"

M2C_UNK func_0205f918(M2C_UNK);                     /* extern */

void func_0207d634(void *arg0, s32 arg1) {
    if (arg1 != 1) {
        M2C_FIELD(arg0, s32 *, 0x40) = (s32) (M2C_FIELD(arg0, s32 *, 0x40) & ~0x40);
        return;
    }
    func_0205f918(0xE);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) ((M2C_FIELD(arg0, s32 *, 0x40) | 0x40) & ~0x10);
}
