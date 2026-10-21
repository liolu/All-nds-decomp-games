#include "m2c.h"

s32 func_020312a4(M2C_UNK *, void *, M2C_UNK);      /* extern */
s32 func_02031944(s32 *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02033fe4(s32 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02034190(M2C_UNK *, s32);              /* extern */
M2C_UNK func_0204ffa0(void *);                      /* extern */
extern M2C_UNK data_020a8bd8;

s32 func_02031b0c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 *arg5, s32 arg6) {
    M2C_UNK var_r2;
    s32 temp_r0;
    s32 var_ip;

    if (arg5 == NULL) {
        return 0;
    }
    if (arg4 == 0) {
        return 0;
    }
    if (*arg5 != 0) {
        var_ip = 1;
    } else {
        func_0204ffa0(((s8 *) arg5 + 0x4C));
        func_02034190(&data_020a8bd8, arg4);
        var_r2 = 1;
        if (arg6 == 0) {
            var_r2 = 0;
        }
        *arg5  = func_020312a4(&data_020a8bd8, ((s8 *) arg5 + 0x18), var_r2);
        var_ip = 0;
    }
    temp_r0 = func_02031944(arg5, arg0, arg1, arg2, arg3, var_ip);
    switch (temp_r0) {                              /* irregular */
        case 1:
            return 0;
        case 2:
            return 0;
        default:
            if (arg6 != 0) {
                func_02033fe4(arg5, 0, 1, 0);
            }
            return 1;
    }
}
