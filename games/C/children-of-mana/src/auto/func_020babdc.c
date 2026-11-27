/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c33a0(void *, s32);                 /* extern */

void func_020babdc(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xC) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0xD8) != 0) {
        return;
    }
    func_020c33a0(arg0 + 0xF8, M2C_FIELD(arg0, s32 *, 0xD0));
}
