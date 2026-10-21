#include "m2c.h"

s32 func_020bacb8(void *);                          /* extern */
M2C_UNK func_020bbbdc();                            /* extern */
M2C_UNK func_020bdde0(void *);                      /* extern */

void func_020be3f0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    func_020bbbdc(arg0);
    if (func_020bacb8(arg0) == 0) {
        return;
    }
    func_020bdde0(arg0);
}
