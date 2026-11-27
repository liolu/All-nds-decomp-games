/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209fe74(void **);                         /* extern */
s32 func_0209fe8c(void **);                         /* extern */

void func_020d2718(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    void **temp_r0_3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {                              /* irregular */
        case 0:
            temp_r0_2 = func_0209fe8c(M2C_FIELD(arg0, void ***, 0x14));
            if ((temp_r0_2 == 1) || (temp_r0_2 == 4)) {
                temp_r0_3 = M2C_FIELD(arg0, void ***, 0x14);
                M2C_FIELD(*temp_r0_3, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK), 0xC)(temp_r0_3, 4, 0);
            }
            M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 1);
            return;
        case 1:
            if (func_0209fe74(M2C_FIELD(arg0, void ***, 0x14)) != 0) {
                M2C_FIELD(arg0, s32 *, 4) = 3;
            }
            return;
    }
}
