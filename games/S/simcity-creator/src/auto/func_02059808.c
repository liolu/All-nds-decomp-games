#include "m2c.h"

s32 func_02059858();                                /* extern */
s32 func_020704a8(s32, u16, u16);                   /* extern */
s32 func_02073b08(s32);                             /* extern */

s32 func_02059808(void *arg0, u16 *arg1, u16 *arg2) {
    if ((func_02059858() != 0) && (func_020704a8(M2C_FIELD(arg0, s32 *, 8), *arg1, *arg2) == 0) &&
        (func_02073b08(M2C_FIELD(arg0, s32 *, 8)) == 0)) {
        return 0xC0;
    }
    return 0;
}
