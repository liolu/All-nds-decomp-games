#include "m2c.h"

s32 *func_020044c0(void *);                         /* extern */
M2C_UNK func_020047dc(s32, s32);                    /* extern */
M2C_UNK func_02004b1c(s32, void *);                 /* extern */

void func_0200419c(void *arg0, s32 arg1, s32 *arg2) {
    s32 *temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) *arg2;
    }
    func_020047dc(M2C_FIELD(arg0, s32 *, 0), arg1);
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        func_02004b1c(M2C_FIELD(arg0, s32 *, 0), arg0);
    }
    temp_r0 = func_020044c0(arg0 + 4);
    if (temp_r0 != NULL) {
        *temp_r0 = arg1;
    }
}
