#include "m2c.h"

s32 func_02055ab0(s32);                             /* extern */
s32 func_02056464(s32);                             /* extern */
s32 func_02056a20(s32);                             /* extern */
s32 func_02058734(s32);                             /* extern */

s32 func_02054400(void *arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (func_02058734(M2C_FIELD(arg0, s32 *, 0x10)) != 0) {
        var_r4 |= 2;
    }
    if (func_02055ab0(M2C_FIELD(arg0, s32 *, 0x24)) != 0) {
        var_r4 |= 8;
    }
    if (func_02056a20(M2C_FIELD(arg0, s32 *, 0x1C)) != 0) {
        var_r4 |= 0x10;
    }
    if (func_02056464(M2C_FIELD(arg0, s32 *, 0x20)) != 0) {
        var_r4 |= 0x40;
    }
    if (func_02058734(M2C_FIELD(arg0, s32 *, 0x14)) != 0) {
        var_r4 |= 0x20;
    }
    if (func_02058734(M2C_FIELD(arg0, s32 *, 0x18)) != 0) {
        var_r4 |= 0x80;
    }
    return var_r4;
}
