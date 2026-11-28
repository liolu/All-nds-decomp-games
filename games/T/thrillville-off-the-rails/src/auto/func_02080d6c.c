#include "m2c.h"

void *func_0207f8b8(s32);                           /* extern */
s32 func_0208109c(void **, void *, u8, u8, s32, s32, s32, s32, s32, s32); /* extern */

s32 func_02080d6c(void **arg0, s32 arg1, s32 arg2) {
    s32 var_r0;
    s32 var_r0_2;
    void *temp_r0;
    void *temp_r1;

    temp_r0 = func_0207f8b8(arg1);
    var_r0  = 0;
    if (temp_r0 != NULL) {
        var_r0 =
            func_0208109c(arg0, temp_r0, M2C_FIELD(temp_r0, u8 *, 6), M2C_FIELD(temp_r0, u8 *, 5), arg1, arg2, 0, 0, 0, 0);
    }
    if (var_r0 == 0) {
        return 0;
    }
    temp_r1 = *arg0;
    if (temp_r1 != NULL) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        M2C_FIELD(temp_r1, s32 *, 0x110) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x110) | 4);
    }
    return 1;
}
