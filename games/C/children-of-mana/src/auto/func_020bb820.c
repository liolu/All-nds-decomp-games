/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bb2d4(void *);                      /* extern */

void func_020bb820(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xE8) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0xC) == 0) {
        return;
    }
    func_020bb2d4(arg0 + 0xF8);
}
