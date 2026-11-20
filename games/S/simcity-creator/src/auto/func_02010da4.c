#include "m2c.h"

s32 func_02010dcc();                                /* extern */
s32 func_02010de4();                                /* extern */

s32 func_02010da4(void) {
    if ((func_02010de4() != 0) && (func_02010dcc() == 0)) {
        return 1;
    }
    return 0;
}
