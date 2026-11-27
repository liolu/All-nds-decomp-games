/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c63d8(void *);                          /* extern */
M2C_UNK func_020c69c0(void *);                      /* extern */

void func_020d8ad4(void *arg0) {
    u32 temp_r0_2;
    u32 temp_r0_3;
    void **temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x198) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x16C);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x18)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, u32 *, 0x168);
    switch (temp_r0_2) {                            /* switch 1 */
        case 0:                                         /* switch 1 */
        case 1:                                         /* switch 1 */
            break;
        default:                                        /* switch 1 */
            break;
        case 2:                                         /* switch 1 */
        case 3:                                         /* switch 1 */
            if (func_020c63d8(arg0) != 0) {
                temp_r0_3 = M2C_FIELD(arg0, u32 *, 0x168);
                switch (temp_r0_3) {                    /* switch 2; irregular */
                    case 3:                                 /* switch 2 */
                        M2C_FIELD(arg0, u32 *, 0x168) = 0U;
                        break;
                    case 2:                                 /* switch 2 */
                        M2C_FIELD(arg0, u32 *, 0x168) = 1U;
                        break;
                }
            }
            break;
    }
    func_020c69c0(arg0);
}
