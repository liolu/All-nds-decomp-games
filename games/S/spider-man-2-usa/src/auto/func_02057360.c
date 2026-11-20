/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02057258();                                /* extern */
s32 func_0205728c();                                /* extern */
s32 func_020573d8();                                /* extern */
extern s32 data_02157ca8;

s32 func_02057360(void) {
    s32 temp_r4;
    s32 var_r2;

    if (data_02157ca8 == -1) {
        temp_r4 = func_0205728c();
        if (func_020573d8() != 0) {
            var_r2 = temp_r4 | 0x10000000;
        } else if (func_02057258() != 0) {
            var_r2 = temp_r4 | 0x40000000;
        } else if (temp_r4 & 0x01000000) {
            var_r2 = temp_r4 | 0x20000000;
        } else {
            var_r2 = temp_r4 | 0x80000000;
        }
        data_02157ca8 = var_r2 | *(u16 *) 0x027FFFFA;
    }
    return data_02157ca8;
}
