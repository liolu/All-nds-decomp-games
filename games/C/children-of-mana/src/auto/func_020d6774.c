/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020da5d8(s32);                             /* extern */
M2C_UNK func_020dae84(s32, M2C_UNK, s32, s32, s32, s32); /* extern */

void func_020d6774(void *arg0, M2C_UNK arg1) {
    M2C_UNK var_r1;
    s32 temp_r0;
    s32 temp_r0_2;

    var_r1  = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    switch (temp_r0) {                              /* switch 1; irregular */
        case 2:                                         /* switch 1 */
            var_r1 = 1;
            break;
        case 0:                                         /* switch 1 */
        case 1:                                         /* switch 1 */
            var_r1 = 0;
            break;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r0_2) {                            /* switch 2; irregular */
        case 0:                                         /* switch 2 */
            func_020dae84(M2C_FIELD(arg0, s32 *, 0x14), var_r1, M2C_FIELD(arg0, s32 *, 0x5C), M2C_FIELD(arg0, s32 *, 0x60),
                          M2C_FIELD(arg0, s32 *, 0x64), (s32) M2C_FIELD(arg0, u8 *, 0x58));
            M2C_FIELD(arg0, s32 *, 0x28) = 0;
            M2C_FIELD(arg0, s32 *, 4)    = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
            return;
        case 1:                                         /* switch 2 */
            if (func_020da5d8(M2C_FIELD(arg0, s32 *, 0x14)) != 0) {
                M2C_FIELD(arg0, s32 *, 0) = 0xB;
            }
            return;
    }
}
