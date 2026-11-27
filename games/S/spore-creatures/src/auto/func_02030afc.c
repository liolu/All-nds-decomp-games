#include "m2c.h"

M2C_UNK func_02030b3c();                            /* extern */
M2C_UNK func_02030cf8();                            /* extern */
M2C_UNK func_02030d84();                            /* extern */

void func_02030afc(void *arg0, s32 arg1) {
    u16 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u16 *, 0x12E);
    switch (temp_r2) {                              /* irregular */
        case 0:
            func_02030b3c(arg0, arg1);
            return;
        case 1:
            func_02030cf8(arg0, arg1);
            return;
        case 2:
            func_02030d84(arg0, arg1);
            return;
    }
}
