#include "m2c.h"

s32 func_02055ab0(s32);                             /* extern */
s32 func_02055ad8(s32, M2C_UNK, s16 *, s16 *);      /* extern */
s32 func_02056464(s32);                             /* extern */
s32 func_02056830(s32, s16 *, s16 *);               /* extern */
s32 func_02056a20(s32);                             /* extern */
s32 func_02056ac8(s32, s16 *, s16 *);               /* extern */
s16 func_020586f4(s32, M2C_UNK);                    /* extern */
s16 func_02058710(s32, M2C_UNK);                    /* extern */
s32 func_02058734(s32);                             /* extern */

s32 func_02054474(void *arg0, s16 *arg1, s16 *arg2) {
    if (func_02058734(M2C_FIELD(arg0, s32 *, 0x10)) != 0) {
        *arg1 = func_020586f4(M2C_FIELD(arg0, s32 *, 0x10), 0);
        *arg2 = func_02058710(M2C_FIELD(arg0, s32 *, 0x10), 0);
        return 1;
    }
    if (func_02055ab0(M2C_FIELD(arg0, s32 *, 0x24)) != 0) {
        return func_02055ad8(M2C_FIELD(arg0, s32 *, 0x24), 0, arg1, arg2);
    }
    if (func_02056a20(M2C_FIELD(arg0, s32 *, 0x1C)) != 0) {
        return func_02056ac8(M2C_FIELD(arg0, s32 *, 0x1C), arg1, arg2);
    }
    if (func_02056464(M2C_FIELD(arg0, s32 *, 0x20)) != 0) {
        return func_02056830(M2C_FIELD(arg0, s32 *, 0x20), arg1, arg2);
    }
    if (func_02058734(M2C_FIELD(arg0, s32 *, 0x14)) != 0) {
        *arg1 = func_020586f4(M2C_FIELD(arg0, s32 *, 0x14), 0);
        *arg2 = func_02058710(M2C_FIELD(arg0, s32 *, 0x14), 0);
        return 1;
    }
    if (func_02058734(M2C_FIELD(arg0, s32 *, 0x18)) == 0) {
        return 0;
    }
    *arg1 = func_020586f4(M2C_FIELD(arg0, s32 *, 0x18), 0);
    *arg2 = func_02058710(M2C_FIELD(arg0, s32 *, 0x18), 0);
    return 1;
}
