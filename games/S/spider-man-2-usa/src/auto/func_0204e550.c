/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204e684(void *, s32 **);              /* extern */

void func_0204e550(void *arg0, void *arg1) {
    s32 temp_r2;
    s32 var_r2;
    void **temp_r0;

    if (M2C_FIELD(arg1, s32 *, 0) != 4) {
        return;
    }
    temp_r2 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r2) {                              /* irregular */
        case 0:
            func_0204e684(arg0, M2C_FIELD(arg1, s32 ***, 8));
            return;
        case 1:
            temp_r0 = M2C_FIELD(arg0, void ***, 4);
            if (temp_r0 == NULL) {
                return;
            }
            if (temp_r0 != NULL) {
                M2C_FIELD(*temp_r0, M2C_UNK(**)(), 4)(temp_r0);
            }
            M2C_FIELD(arg0, void ***, 4) = NULL;
            return;
        case 2:
            if (M2C_FIELD(arg0, void ***, 4) == NULL) {
                var_r2 = 1;
            } else {
                var_r2 = 0;
            }
            **M2C_FIELD(arg1, s32 ***, 8) = var_r2;
            return;
    }
}
