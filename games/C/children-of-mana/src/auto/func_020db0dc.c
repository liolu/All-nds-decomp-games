/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020da600(void *);                      /* extern */
M2C_UNK func_020da6ec(void *);                      /* extern */
M2C_UNK func_020da964(void *);                      /* extern */
M2C_UNK func_020dabec(void *);                      /* extern */
M2C_UNK func_020dace8(void *);                      /* extern */
M2C_UNK func_020dad78(void *);                      /* extern */

void func_020db0dc(void *arg0) {
    u32 temp_r0_3;
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_4;

    temp_r0 = M2C_FIELD(arg0, void ***, 0x14);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x18)(temp_r0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x18);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(*temp_r0_2, M2C_UNK(**)(), 0x18)(temp_r0_2);
    }
    temp_r0_3 = M2C_FIELD(arg0, u32 *, 4);
    switch (temp_r0_3) {
        default:
            break;
        case 1:
            func_020dad78(arg0);
            break;
        case 2:
            func_020dabec(arg0);
            break;
        case 3:
            func_020dace8(arg0);
            break;
        case 4:
            func_020da964(arg0);
            break;
        case 6:
            func_020da6ec(arg0);
            break;
        case 5:
            func_020da600(arg0);
            break;
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x20);
    if (temp_r0_4 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0_4, M2C_UNK(**)(), 8)(temp_r0_4);
}
