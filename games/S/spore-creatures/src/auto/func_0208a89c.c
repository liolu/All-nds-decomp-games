#include "m2c.h"

M2C_UNK func_0200894c(M2C_UNK *, void *, void **, s32 *); /* extern */
M2C_UNK func_0208a70c(s32);                         /* extern */
M2C_UNK func_0208aad8(void *, s32);                 /* extern */

void func_0208a89c(void *arg0) {
    s32 sp8;
    void *sp4;
    M2C_UNK sp0;
    s32 var_r4;
    void *temp_r1;
    void *temp_r5;
    void *var_r6;

    var_r6  = M2C_FIELD(arg0, void **, 0x10);
    temp_r5 = arg0 + 0x10;
    if (var_r6 != temp_r5) {
        do {
            var_r4 = M2C_FIELD(var_r6, s32 *, 4);
            if (var_r4 != 0) {
                var_r4 -= 4;
            }
            if (var_r4 != 0) {
                func_0208a70c(var_r4);
            }
            func_0208aad8(arg0, var_r4);
            var_r6 = M2C_FIELD(var_r6, void **, 0);
        } while (var_r6 != temp_r5);
    }
    temp_r1 = arg0 + 0x10;
    sp8     = M2C_FIELD(arg0, s32 *, 0x14);
    sp4     = temp_r1;
    func_0200894c(&sp0, temp_r1, &sp4, &sp8);
}
