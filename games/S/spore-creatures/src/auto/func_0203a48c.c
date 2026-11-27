#include "m2c.h"

void *func_02055a64(void *, M2C_UNK);               /* extern */
M2C_UNK func_02055ab8(void *);                      /* extern */
M2C_UNK func_0205685c(void *, s32, M2C_UNK);        /* extern */
void *func_02093480(M2C_UNK);                       /* extern */
M2C_UNK func_020934a8(void *);                      /* extern */

void func_0203a48c(void *arg0, s32 arg1) {
    void *temp_r5;
    void *var_r0;

    if (arg1 == 0xFFFF) {
        temp_r5 = M2C_FIELD(arg0, void **, 4);
        if (temp_r5 != NULL) {
            if (temp_r5 != NULL) {
                func_02055ab8(temp_r5);
                func_020934a8(temp_r5);
            }
            M2C_FIELD(arg0, void **, 4) = NULL;
            return;
        }
    }
    if (M2C_FIELD(arg0, void **, 4) == NULL) {
        var_r0 = func_02093480(0x38);
        if (var_r0 != NULL) {
            var_r0 = func_02055a64(var_r0, 0);
        }
        M2C_FIELD(arg0, void **, 4)    = var_r0;
        M2C_FIELD(var_r0, u16 *, 0x22) = (u16) (M2C_FIELD(var_r0, u16 *, 0x22) & ~2);
    }
    func_0205685c(M2C_FIELD(arg0, void **, 4), arg1, 0);
}
