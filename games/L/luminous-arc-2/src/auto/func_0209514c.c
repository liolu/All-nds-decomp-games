#include "m2c.h"

M2C_UNK func_02007558(void *, void *, M2C_UNK);     /* extern */
void *func_02093afc();                              /* extern */
void *func_020951d8();                              /* extern */
void *func_020952a4();                              /* extern */
void *func_020952d4(void *);                        /* extern */
M2C_UNK func_02095390(void *);                      /* extern */

void func_0209514c(void *arg0, s16 arg1) {
    void *temp_r0;
    void *var_r7;

    temp_r0 = func_02093afc();
    if (temp_r0 == NULL) {
        return;
    }
    if ((M2C_FIELD(temp_r0, u8 *, 0x226A) == 0) && (M2C_FIELD(arg0, u16 *, 0x3C) == 0)) {
        var_r7 = func_020952d4(arg0 + 4);
        if (var_r7 == NULL) {
            var_r7 = func_020951d8();
        }
        if ((var_r7 == NULL) && (M2C_FIELD(temp_r0, s32 *, 0x2278) == 1)) {
            var_r7 = func_020952a4();
        }
        if (var_r7 == NULL) {
            return;
        }
        M2C_FIELD(var_r7, s16 *, 2) = arg1;
        func_02007558(arg0, var_r7 + 0x10, 0xC0);
        func_02095390(var_r7);
    }
}
