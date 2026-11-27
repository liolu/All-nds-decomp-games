/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020d5bdc();                                /* extern */

s32 func_020d5cec(s32 *arg0) {
    s32 temp_r1;

    temp_r1 = *arg0;
    switch (temp_r1) {                              /* irregular */
        case 20:
        case 17:
        case 0:
        case 2:
        case 5:
        case 8:
        case 11:
        case 14:
            return func_020d5bdc(arg0);
        default:
            return 0;
    }
}
