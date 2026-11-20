#include "m2c.h"

M2C_UNK func_020b51e0(void *);                      /* extern */
s32 func_020b6bd0();                                /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */

void func_020b519c(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_020b6bd0();
    if (M2C_FIELD(arg0, s32 *, 0x64) != 2) {
        func_020b51e0(arg0 + 0x9C);
    }
    func_020b6be4(temp_r4);
}
