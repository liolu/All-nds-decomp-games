#include "m2c.h"

s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
M2C_UNK func_0209c2e4();                            /* extern */
extern s32 data_021725b0;

void func_0209c484(void) {
    s32 temp_r5;

    temp_r5 = func_02006be0();
    if (data_021725b0 != 0) {
        do {
            func_0209c2e4();
        } while (data_021725b0 != 0);
    }
    func_02006bf4(temp_r5);
}
