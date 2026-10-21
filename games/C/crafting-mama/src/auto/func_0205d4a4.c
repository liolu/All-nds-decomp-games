#include "m2c.h"

s32 func_0205d4a4(void *arg0) {
    s32 var_r0;
    void *temp_r0;
    void *temp_r1;

    if (arg0 == NULL) {
        return 1;
    }
    temp_r1 = M2C_FIELD(arg0, void **, 0x30);
    if (temp_r1 == NULL) {
        temp_r0 = M2C_FIELD(arg0, void **, 0x2C);
        if (temp_r0 == NULL) {
            return 1;
        }
        if (M2C_FIELD(temp_r0, s32 *, 0xC) == 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if (temp_r1 == NULL) {
        return 1;
    }
    if (M2C_FIELD(temp_r1, s32 *, 0xC) == 0) {
        return 1;
    }
    return 0;
}
