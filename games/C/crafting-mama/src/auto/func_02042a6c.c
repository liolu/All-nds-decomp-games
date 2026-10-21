#include "m2c.h"

void *func_02029490();                              /* extern */
s32 func_02042ac4(void *, void *);                  /* extern */

void func_02042a6c(void) {
    void *temp_r0;

    temp_r0 = func_02029490();
    if (M2C_FIELD(temp_r0, s32 **, 0x30) == NULL) {
        M2C_FIELD(temp_r0, s32 *, 0x10) = 1;
    }
    if (*M2C_FIELD(temp_r0, s32 **, 0x30) == 0) {
        M2C_FIELD(temp_r0, s32 *, 0x10) = 1;
    }
    if (M2C_FIELD(temp_r0, s32 *, 0x10) != 0) {
        return;
    }
    if (func_02042ac4(temp_r0 + 0x28, temp_r0 + 0x44) == 0) {
        M2C_FIELD(temp_r0, s32 *, 0x10) = 1;
    }
}
