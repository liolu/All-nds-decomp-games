#include "m2c.h"

s32 func_020742ec(M2C_UNK);                         /* extern */
s32 func_020953f4();                                /* extern */
M2C_UNK func_02095734(s32);                         /* extern */
extern s32 data_020fc4a8;

void func_02092448(void) {
    s32 var_r0;

    if (data_020fc4a8 == 0) {
        var_r0 = func_020742ec(0x32C);
        if (var_r0 != 0) {
            var_r0 = func_020953f4();
        }
        data_020fc4a8 = var_r0;
    }
    func_02095734(data_020fc4a8);
}
