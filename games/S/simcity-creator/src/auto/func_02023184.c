#include "m2c.h"

s32 func_02022a3c(s32);                             /* extern */
extern s32 data_020d4cec;

s32 func_02023184(s32 arg0) {
    if (func_02022a3c(arg0 + 4) == 0) {
        return 0;
    }
    data_020d4cec = 1;
    return 1;
}
