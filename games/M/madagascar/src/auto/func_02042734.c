/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02034034();                            /* extern */

void func_02042734(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x184) > 0) {
        M2C_FIELD(arg0, s32 *, 0x1A4) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1A4) = 2;
    }
    func_02034034(arg0, arg1);
}
