/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205b544();                                /* extern */
s32 func_0205b578();                                /* extern */
s32 func_0205b6c4();                                /* extern */
extern s32 data_020ff0a8;

s32 func_0205b64c(void) {
    s32 temp_r4;
    s32 var_r2;

    if (data_020ff0a8 == -1) {
        temp_r4 = func_0205b578();
        if (func_0205b6c4() != 0) {
            var_r2 = temp_r4 | 0x10000000;
        } else if (func_0205b544() != 0) {
            var_r2 = temp_r4 | 0x40000000;
        } else if (temp_r4 & 0x01000000) {
            var_r2 = temp_r4 | 0x20000000;
        } else {
            var_r2 = temp_r4 | 0x80000000;
        }
        data_020ff0a8 = var_r2 | *(u16 *) 0x027FFFFA;
    }
    return data_020ff0a8;
}
