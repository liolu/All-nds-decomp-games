/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b07d4(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_020b5810(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 == 0) {
        return;
    }
    switch (arg1) {                                 /* irregular */
        case 0:
            func_020b07d4(temp_r0, 0, 0);
            func_020b07d4(M2C_FIELD(arg0, s32 *, 4), 2, 0);
            return;
        case 1:
            func_020b07d4(temp_r0, 0, 0);
            func_020b07d4(M2C_FIELD(arg0, s32 *, 4), 1, 0);
            return;
    }
}
