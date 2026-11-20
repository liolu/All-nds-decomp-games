#include "m2c.h"

s32 func_02063d5c();                                /* extern */

s32 func_0206310c(s32 arg0) {
    if (arg0 == 0) {
        return 0;
    }
    if (func_02063d5c() == 1) {
        return 1;
    }
    return 0;
}
