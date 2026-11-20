#include "m2c.h"

M2C_UNK func_020545e0();                            /* extern */
M2C_UNK func_02054714();                            /* extern */
M2C_UNK func_02054be0();                            /* extern */

s32 func_0205459c(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(arg0, u8 *, 0x11) != 0) {
        func_020545e0(arg0, arg1, arg2);
    } else if (M2C_FIELD(arg0, s16 *, 0x38) == 0) {
        func_02054be0(arg0, arg1, arg2);
    } else {
        func_02054714(arg0, arg1, arg2);
    }
    M2C_FIELD(arg0, s8 *, 0x43) = 0;
    return 1;
}
