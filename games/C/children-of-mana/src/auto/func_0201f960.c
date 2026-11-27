/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201b44c(void *);                          /* extern */
s32 func_0201cc2c(s32);                             /* extern */
s32 func_0201cc3c(s32);                             /* extern */
s32 func_0201d204();                                /* extern */

s32 func_0201f960(void *arg0, s32 arg1) {
    if (func_0201d204() == 0) {
        return 0;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x2DE) == 0) && (arg1 == M2C_FIELD(arg0, s32 *, 0x220))) {
        return 0;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x2DF) != 0) && (arg1 != M2C_FIELD(arg0, s32 *, 0x224))) {
        return 0;
    }
    if (func_0201cc2c(arg1) == 2) {
        return 0;
    }
    if ((func_0201b44c(arg0) == 0) && (M2C_FIELD(arg0, s32 *, 0x88) == func_0201cc3c(arg1)) && (func_0201cc2c(arg1) == 1)) {
        return 0;
    }
    return 1;
}
