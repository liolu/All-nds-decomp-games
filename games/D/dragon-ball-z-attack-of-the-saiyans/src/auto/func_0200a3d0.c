#include "m2c.h"

s16 func_02005bcc(s32, s32);                        /* extern */
s32 func_02080a1c(s32);                             /* extern */
extern M2C_UNK data_020ae400;

void func_0200a3d0(s32 arg0, s32 arg1, s32 arg2, s16 arg3) {
    s32 var_r6;

    var_r6 = arg1;
    if (var_r6 <= 0) {
        var_r6 = 1;
    }
    if ((arg0 != 0) && (arg0 != 2)) {

    } else {
        M2C_FIELD(&data_020ae400, s16 *, 0) = (s16) (func_02080a1c(0x0400006C) << 8);
        M2C_FIELD(&data_020ae400, s16 *, 4) = (s16) (arg2 << 8);
        M2C_FIELD(&data_020ae400, s16 *, 2) =
            func_02005bcc(M2C_FIELD(&data_020ae400, s16 *, 4) - M2C_FIELD(&data_020ae400, s16 *, 0), var_r6);
        M2C_FIELD(&data_020ae400, s16 *, 6) = arg3;
    }
    if ((u32) (arg0 - 1) > 1U) {
        return;
    }
    M2C_FIELD(&data_020ae400, s16 *, 8)   = (s16) (func_02080a1c(0x0400106C) << 8);
    M2C_FIELD(&data_020ae400, s16 *, 0xC) = (s16) (arg2 << 8);
    M2C_FIELD(&data_020ae400, s16 *, 0xA) =
        func_02005bcc(M2C_FIELD(&data_020ae400, s16 *, 0xC) - M2C_FIELD(&data_020ae400, s16 *, 8), var_r6);
    M2C_FIELD(&data_020ae400, s16 *, 0xE) = arg3;
}
