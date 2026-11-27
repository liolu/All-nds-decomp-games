/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020c87e0();                                /* extern */
extern s32 data_02129c24;
extern s32 data_02129c28;

void func_020c8860(void) {
    s32 var_r0;

    if (data_02129c24 == 0) {
        var_r0 = func_0200f270(8, 0);
        if (var_r0 != 0) {
            var_r0 = func_020c87e0();
        }
        data_02129c28 = var_r0;
    }
    data_02129c24 += 1;
}
