/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02029678(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202b7ec(void *, M2C_UNK);             /* extern */
void *func_0202be38();                              /* extern */

void func_02028e34(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(func_0202be38(), s32 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 1:
            return;
        case 3:
            func_0202b7ec(func_0202be38(), 1);
            return;
        case 4:
            M2C_FIELD(arg0, s16 *, 0x3C) = 0;
            func_02029678(func_0202be38(), 0);
            M2C_FIELD(arg0, s32 *, 8) = 3;
            return;
    }
}
