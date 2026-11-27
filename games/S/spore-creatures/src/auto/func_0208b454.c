#include "m2c.h"

M2C_UNK func_020021f0();                            /* extern */
s32 func_0209312c(s32, M2C_UNK, M2C_UNK);           /* extern */

void func_0208b454(void *arg0, u32 arg1) {
    if (arg1 > 0x1FFFFFFFU) {
        func_020021f0();
    }
    M2C_FIELD(arg0, s32 *, 0) = func_0209312c(arg1 * 8, 2, -4);
    M2C_FIELD(arg0, u32 *, 8) = arg1;
}
