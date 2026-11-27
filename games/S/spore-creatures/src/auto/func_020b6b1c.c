#include "m2c.h"

M2C_UNK func_020b6994();                            /* extern */
s32 func_020b6bd0();                                /* extern */
M2C_UNK func_020b6be4(s32);                         /* extern */
extern M2C_UNK data_020f1cb8;

void func_020b6b1c(void) {
    s32 temp_r5;
    void *temp_r0;
    void *var_r6;

    temp_r5 = func_020b6bd0();
    if (M2C_FIELD(&data_020f1cb8, void **, 4) != NULL) {
        var_r6 = M2C_FIELD(M2C_FIELD(&data_020f1cb8, void **, 4), void **, 0x18);
    } else {
        var_r6 = NULL;
    }
    if (M2C_FIELD(&data_020f1cb8, void **, 4) != NULL) {
        do {
            func_020b6994();
            temp_r0 = var_r6;
            if (var_r6 != NULL) {
                var_r6 = M2C_FIELD(var_r6, void **, 0x18);
            } else {
                var_r6 = NULL;
            }
        } while (temp_r0 != NULL);
    }
    func_020b6be4(temp_r5);
}
