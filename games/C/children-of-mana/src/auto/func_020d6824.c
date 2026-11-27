/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020d39bc(s32);                             /* extern */
M2C_UNK func_020d3e78(s32, M2C_UNK, u8, u8);        /* extern */

void func_020d6824(void *arg0, M2C_UNK arg1) {
    M2C_UNK var_r1;
    s32 temp_r0;
    s32 temp_r0_2;
    u8 temp_r2;

    var_r1  = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    switch (temp_r0) {                              /* switch 1; irregular */
        case 2:                                         /* switch 1 */
            var_r1 = 2;
            break;
        case 0:                                         /* switch 1 */
            var_r1 = 0;
            break;
        case 1:                                         /* switch 1 */
            var_r1 = 1;
            break;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r0_2) {                            /* switch 2; irregular */
        case 0:                                         /* switch 2 */
            temp_r2 = M2C_FIELD(arg0, u8 *, 0x58);
            func_020d3e78(M2C_FIELD(arg0, s32 *, 0xC), var_r1, temp_r2, temp_r2);
            M2C_FIELD(arg0, s32 *, 0x28) = 0;
            M2C_FIELD(arg0, s32 *, 4)    = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
            return;
        case 1:                                         /* switch 2 */
            if (func_020d39bc(M2C_FIELD(arg0, s32 *, 0xC)) != 0) {
                M2C_FIELD(arg0, s32 *, 0) = 5;
            }
            return;
    }
}
