#include "m2c.h"

s32 func_02055ab0(s32);                             /* extern */
s32 func_02056464(s32);                             /* extern */
s32 func_02056a20(s32);                             /* extern */
s32 func_02058734(s32);                             /* extern */

s32 func_0205480c(void *arg0) {
    if ((func_02058734(M2C_FIELD(arg0, s32 *, 0x10)) == 0) && (func_02058734(M2C_FIELD(arg0, s32 *, 0x14)) == 0) &&
        (func_02056a20(M2C_FIELD(arg0, s32 *, 0x1C)) == 0) && (func_02055ab0(M2C_FIELD(arg0, s32 *, 0x24)) == 0) &&
        (func_02056464(M2C_FIELD(arg0, s32 *, 0x20)) == 0) && (func_02058734(M2C_FIELD(arg0, s32 *, 0x18)) == 0)) {
        return 0;
    }
    return 1;
}
