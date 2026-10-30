#include "m2c.h"

M2C_UNK func_0203491c();                            /* extern */

s32 func_0208f420(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_0203491c();
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    return 1;
}
