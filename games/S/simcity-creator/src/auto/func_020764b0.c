#include "m2c.h"

M2C_UNK func_02076dac(void *);                      /* extern */
M2C_UNK func_0207700c();                            /* extern */
M2C_UNK func_0207703c(void *);                      /* extern */
M2C_UNK func_020770fc(void *);                      /* extern */
M2C_UNK func_020772f4(void *);                      /* extern */
M2C_UNK func_02077328(void *);                      /* extern */

s32 func_020764b0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u8 *, 4) != 0) {
        return 0;
    }
    func_0207700c(arg0, arg1);
    func_02076dac(arg0);
    func_0207703c(arg0);
    func_020770fc(arg0);
    func_020772f4(arg0);
    func_02077328(arg0);
    M2C_FIELD(arg0, u8 *, 4)     = 1U;
    M2C_FIELD(arg0, s32 *, 0xE4) = 0;
    return 1;
}
