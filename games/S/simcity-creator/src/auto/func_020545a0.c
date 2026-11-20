#include "m2c.h"

s32 func_02055ab0(s32);                             /* extern */
s32 func_02055ad8(s32, s32, s16 *, s16 *);          /* extern */
s8 func_02055dbc(s32, s32);                         /* extern */
s32 func_02056464(s32);                             /* extern */
s32 func_02056830(s32, s16 *, s16 *);               /* extern */
s32 func_02056a20(s32);                             /* extern */
s32 func_02056b30(s32, s32, s16 *, s16 *);          /* extern */
s8 func_02056bbc(s32, s32);                         /* extern */
s16 func_020586f4(s32, u16);                        /* extern */
s16 func_02058710(s32, u16);                        /* extern */
s32 func_0205872c(s32);                             /* extern */
s32 func_02058734(s32);                             /* extern */
s16 func_020590d0(s32, s32);                        /* extern */
s8 func_020590e0(s32, s32);                         /* extern */

s32 func_020545a0(void *arg0, s32 arg1, s16 *arg2, s16 *arg3, s16 *arg4, s8 *arg5) {
    if (func_02058734(M2C_FIELD(arg0, s32 *, 0x10)) != 0) {
        if (func_0205872c(M2C_FIELD(arg0, s32 *, 0x10)) <= arg1) {
            return 0;
        }
        *arg2 = func_020586f4(M2C_FIELD(arg0, s32 *, 0x10), (u16) arg1);
        *arg3 = func_02058710(M2C_FIELD(arg0, s32 *, 0x10), (u16) arg1);
        *arg4 = func_020590d0(M2C_FIELD(arg0, s32 *, 0x10), arg1);
        *arg5 = func_020590e0(M2C_FIELD(arg0, s32 *, 0x10), arg1);
        return 1;
    }
    if (func_02055ab0(M2C_FIELD(arg0, s32 *, 0x24)) != 0) {
        *arg4 = 0x1F;
        *arg5 = func_02055dbc(M2C_FIELD(arg0, s32 *, 0x24), arg1);
        return func_02055ad8(M2C_FIELD(arg0, s32 *, 0x24), arg1, arg2, arg3);
    }
    if (func_02056a20(M2C_FIELD(arg0, s32 *, 0x1C)) != 0) {
        *arg4 = 0x1F;
        *arg5 = func_02056bbc(M2C_FIELD(arg0, s32 *, 0x1C), arg1);
        return func_02056b30(M2C_FIELD(arg0, s32 *, 0x1C), arg1, arg2, arg3);
    }
    if (func_02056464(M2C_FIELD(arg0, s32 *, 0x20)) != 0) {
        *arg4 = 0x1F;
        *arg5 = 0;
        return func_02056830(M2C_FIELD(arg0, s32 *, 0x20), arg2, arg3);
    }
    if (func_02058734(M2C_FIELD(arg0, s32 *, 0x14)) != 0) {
        if (func_0205872c(M2C_FIELD(arg0, s32 *, 0x14)) <= arg1) {
            return 0;
        }
        *arg2 = func_020586f4(M2C_FIELD(arg0, s32 *, 0x14), (u16) arg1);
        *arg3 = func_02058710(M2C_FIELD(arg0, s32 *, 0x14), (u16) arg1);
        *arg4 = func_020590d0(M2C_FIELD(arg0, s32 *, 0x14), arg1);
        *arg5 = func_020590e0(M2C_FIELD(arg0, s32 *, 0x14), arg1);
        return 1;
    }
    if (func_02058734(M2C_FIELD(arg0, s32 *, 0x18)) != 0) {
        if (func_0205872c(M2C_FIELD(arg0, s32 *, 0x18)) <= arg1) {
            return 0;
        }
        *arg2 = func_020586f4(M2C_FIELD(arg0, s32 *, 0x18), (u16) arg1);
        *arg3 = func_02058710(M2C_FIELD(arg0, s32 *, 0x18), (u16) arg1);
        *arg4 = func_020590d0(M2C_FIELD(arg0, s32 *, 0x18), arg1);
        *arg5 = func_020590e0(M2C_FIELD(arg0, s32 *, 0x18), arg1);
        return 1;
    }
    return 0;
}
