#include "m2c.h"

M2C_UNK func_020b5778(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020b5e44(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020b6030(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020b6218(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_020b63c0(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_020b689c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020b8244(M2C_UNK);                         /* extern */
void *func_020b8388(M2C_UNK, M2C_UNK);              /* extern */
void *func_020b83ac(M2C_UNK, M2C_UNK);              /* extern */

void func_020b6e70(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s8 temp_r0;
    s8 temp_r0_2;

    temp_r0 = M2C_FIELD(func_020b8388(arg1, 5), s8 *, 3);
    switch (temp_r0) {                              /* switch 1 */
        default:                                        /* switch 1 */
            break;
        case 0:                                         /* switch 1 */
            func_020b5778(arg0, arg2, arg3);
            break;
        case 1:                                         /* switch 1 */
            func_020b5e44(arg0, arg2, arg3);
            break;
        case 2:                                         /* switch 1 */
            func_020b689c(arg0, arg2, arg3);
            break;
        case 4:                                         /* switch 1 */
            func_020b6030(arg0, arg2, arg3);
            break;
    }
    temp_r0_2 = M2C_FIELD(func_020b83ac(arg1, 5), s8 *, 3);
    switch (temp_r0_2) {                            /* switch 2; irregular */
        case 2:                                         /* switch 2 */
            return;
        case 1:                                         /* switch 2 */
            func_020b6218(arg0, arg2, func_020b8244(arg1) - 1);
            return;
        case 4:                                         /* switch 2 */
            func_020b63c0(arg0, arg2, func_020b8244(arg1) - 1);
            return;
    }
}
