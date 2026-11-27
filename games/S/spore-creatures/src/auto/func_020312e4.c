#include "m2c.h"

M2C_UNK func_0203fc1c(void *);                      /* extern */
s32 func_02041018(s32);                             /* extern */
s32 func_0208d1f8(s32);                             /* extern */

void func_020312e4(void *arg0) {
    u8 temp_r0;
    void *temp_r1;

    temp_r1 = M2C_FIELD(arg0, void **, 0x38);
    if (M2C_FIELD(temp_r1, s32 *, 8) != 0) {
        if (func_02041018(*M2C_FIELD(temp_r1, s32 **, 4)) != 0) {
            return;
        }
        if (M2C_FIELD(arg0, u8 *, 0x13A) != 2) {
            M2C_FIELD(arg0, u8 *, 0x13A) = 0U;
            return;
        }
        func_0203fc1c(M2C_FIELD(arg0, void **, 0x38));
        return;
    }
    if ((M2C_FIELD(arg0, u16 *, 0x12E) == 2) && (M2C_FIELD(arg0, u16 *, 0x12C) == 0)) {
        if (func_0208d1f8(M2C_FIELD(arg0, s32 *, 0x3C)) != 0) {
            return;
        }
        goto block_12;
    }
block_12:
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x13B);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, u8 *, 0x13B) = (u8) (temp_r0 - 1);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x13A) = 0U;
}
