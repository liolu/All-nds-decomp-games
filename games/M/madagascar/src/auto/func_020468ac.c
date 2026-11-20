/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02046928(s32, s32, s32);                   /* extern */

s32 func_020468ac(s32 arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r4_2;

    temp_r4 = func_02046928(arg0, arg0 + 8, arg1);
    if ((s32) (temp_r4 * func_02046928(arg0, arg0 + 8, arg1 + 8)) <= 0) {
        temp_r4_2 = func_02046928(arg1, arg1 + 8, arg0);
        if ((s32) (temp_r4_2 * func_02046928(arg1, arg1 + 8, arg0 + 8)) <= 0) {
            return 1;
        }
    }
    return 0;
}
