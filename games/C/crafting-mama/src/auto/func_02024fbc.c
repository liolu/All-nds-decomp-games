#include "m2c.h"

s32 func_02019dbc();                                /* extern */

s32 func_02024fbc(void) {
    if (func_02019dbc() == 1) {
        return 7;
    }
    return 3;
}
