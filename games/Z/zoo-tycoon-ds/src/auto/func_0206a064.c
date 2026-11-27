/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02069f5c();                                /* extern */
s32 func_02069f90();                                /* extern */
s32 func_0206a0dc();                                /* extern */
extern s32 data_020ce01c;

s32 func_0206a064(void) {
    s32 temp_r4;
    s32 var_r2;

    if (data_020ce01c == -1) {
        temp_r4 = func_02069f90();
        if (func_0206a0dc() != 0) {
            var_r2 = temp_r4 | 0x10000000;
        } else if (func_02069f5c() != 0) {
            var_r2 = temp_r4 | 0x40000000;
        } else if (temp_r4 & 0x01000000) {
            var_r2 = temp_r4 | 0x20000000;
        } else {
            var_r2 = temp_r4 | 0x80000000;
        }
        data_020ce01c = var_r2 | *(u16 *) 0x027FFFFA;
    }
    return data_020ce01c;
}
