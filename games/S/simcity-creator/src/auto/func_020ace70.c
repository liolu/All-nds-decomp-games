#include "m2c.h"

M2C_UNK func_02068370(void *, void *);              /* extern */
M2C_UNK func_0206855c(void *);                      /* extern */

void func_020ace70(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x644) == 0) {
        return;
    }
    func_02068370(arg0 + 0x1B4, arg0 + 8);
    func_0206855c(arg0 + 0x1B4);
    M2C_FIELD(arg0, u8 *, 0x644) = 0U;
}
