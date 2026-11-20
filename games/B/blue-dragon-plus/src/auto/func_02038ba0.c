#include "m2c.h"

M2C_UNK func_02038b58();                            /* extern */
s32 func_02038e10();                                /* extern */
M2C_UNK func_02038e24(s32);                         /* extern */
extern M2C_UNK data_0215de30;

void func_02038ba0(void) {
    s32 temp_r5;
    void *temp_r0;
    void *var_r6;

    temp_r5 = func_02038e10();
    if (M2C_FIELD(&data_0215de30, void **, 0xC) != NULL) {
        var_r6 = M2C_FIELD(M2C_FIELD(&data_0215de30, void **, 0xC), void **, 0x18);
    } else {
        var_r6 = NULL;
    }
    if (M2C_FIELD(&data_0215de30, void **, 0xC) != NULL) {
        do {
            func_02038b58();
            temp_r0 = var_r6;
            if (var_r6 != NULL) {
                var_r6 = M2C_FIELD(var_r6, void **, 0x18);
            } else {
                var_r6 = NULL;
            }
        } while (temp_r0 != NULL);
    }
    func_02038e24(temp_r5);
}
