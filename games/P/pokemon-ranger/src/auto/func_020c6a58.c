/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c6950();                                /* extern */
s32 func_020c6984();                                /* extern */
s32 func_020c6ad0();                                /* extern */
extern s32 data_020f11d4;

s32 func_020c6a58(void) {
    s32 temp_r4;
    s32 var_r2;

    if (data_020f11d4 == -1) {
        temp_r4 = func_020c6984();
        if (func_020c6ad0() != 0) {
            var_r2 = temp_r4 | 0x10000000;
        } else if (func_020c6950() != 0) {
            var_r2 = temp_r4 | 0x40000000;
        } else if (temp_r4 & 0x01000000) {
            var_r2 = temp_r4 | 0x20000000;
        } else {
            var_r2 = temp_r4 | 0x80000000;
        }
        data_020f11d4 = var_r2 | *(u16 *) 0x027FFFFA;
    }
    return data_020f11d4;
}
