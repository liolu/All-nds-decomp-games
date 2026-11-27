/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203d0ec(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void func_020a9478(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_0203d0ec(0, 1, 0x3E, 0, 0);
            return;
        case 1:
            func_0203d0ec(1, 1, 0x3E, 0x10, 0);
            return;
    }
}
