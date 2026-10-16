/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02062a90();                                /* extern */
s32 func_02062ac4();                                /* extern */
s32 func_02062c10();                                /* extern */
extern s32 data_020cedbc;

s32 func_02062b98(void) {
    s32 temp_r4;
    s32 var_r2;

    if (data_020cedbc == -1) {
        temp_r4 = func_02062ac4();
        if (func_02062c10() != 0) {
            var_r2 = temp_r4 | 0x10000000;
        } else if (func_02062a90() != 0) {
            var_r2 = temp_r4 | 0x40000000;
        } else if (temp_r4 & 0x01000000) {
            var_r2 = temp_r4 | 0x20000000;
        } else {
            var_r2 = temp_r4 | 0x80000000;
        }
        data_020cedbc = var_r2 | *(u16 *) 0x027FFFFA;
    }
    return data_020cedbc;
}
