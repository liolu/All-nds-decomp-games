#include "m2c.h"

M2C_UNK func_020181e8(void *);                      /* extern */
s32 func_02019d04();                                /* extern */
M2C_UNK func_02019d18(s32);                         /* extern */

void func_0201a090(s32 *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_02019d04();
    if (arg1 != 0) {
        *arg0 |= arg1;
        func_020181e8(((s8 *) arg0 + 4));
    }
    func_02019d18(temp_r4);
}
