#include "m2c.h"

M2C_UNK func_0200ee28(void *);                      /* extern */
s32 func_020117bc(void *);                          /* extern */

s32 func_02010d18(void *arg0) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x2F8);
    if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, s32 *, 8) == 0x3D) && (M2C_FIELD(arg0, u8 *, 0x600) != 0) &&
        ((temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x5F0), (temp_r0_2 == 1)) || ((u32) (temp_r0_2 - 3) <= 3U)) &&
        (func_020117bc(arg0) != 0)) {
        func_0200ee28(arg0);
        return 1;
    }
    return 0;
}
