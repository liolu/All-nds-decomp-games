#include "m2c.h"

M2C_UNK func_02057cf4();                            /* extern */
M2C_UNK func_02057e60();                            /* extern */
M2C_UNK func_02057fa4();                            /* extern */

void func_020580dc(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x11C);
    switch (temp_r1) {                              /* irregular */
        case 0:
            func_02057cf4(arg0);
            return;
        case 1:
            func_02057e60(arg0);
            return;
        case 2:
            func_02057fa4(arg0);
            return;
    }
}
