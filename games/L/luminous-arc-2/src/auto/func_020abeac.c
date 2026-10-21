#include "m2c.h"

s32 func_020a9fc8(M2C_UNK, M2C_UNK, M2C_UNK *);     /* extern */
void *func_020ab6e8();                              /* extern */
s32 func_020bb8ac(void *, M2C_UNK *, s32, s32, M2C_UNK *); /* extern */
M2C_UNK func_020bb918(s32, M2C_UNK *);              /* extern */
s32 func_020bbc58(s32);                             /* extern */
s16 func_020bbc60(s32);                             /* extern */
M2C_UNK func_020bbc88(s32, M2C_UNK *);              /* extern */
M2C_UNK func_020be42c(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020ab6f4;
extern M2C_UNK func_020ab770;
extern M2C_UNK func_020abcfc;
extern M2C_UNK func_020abd5c;

s32 func_020abeac(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9,
                  s32 argA) {
    u8 sp4[24];
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r5;
    s32 var_r6;
    void *temp_r4;

    var_r6  = arg1;
    var_r5  = arg2;
    temp_r4 = func_020ab6e8();
    if (var_r6 == 0) {
        var_r6 = 0x5DC;
    }
    M2C_FIELD(temp_r4, s32 *, 0x24) = arg3;
    M2C_FIELD(temp_r4, s32 *, 0x28) = arg8;
    M2C_FIELD(temp_r4, s32 *, 0x10) = arg4;
    M2C_FIELD(temp_r4, s32 *, 0x14) = arg5;
    M2C_FIELD(temp_r4, s32 *, 0x18) = arg6;
    M2C_FIELD(temp_r4, s32 *, 0x1C) = arg7;
    if (var_r5 == 0) {
        var_r5 = 0x5B4;
    }
    M2C_FIELD(temp_r4, s32 *, 0x20) = arg9;
    func_020be42c(0, arg0, sp4);
    if (func_020bb8ac(temp_r4, sp4, var_r5, var_r6, &func_020ab770) != 0) {
        return 3;
    }
    temp_r0                      = func_020a9fc8(0xC, 1, NULL);
    M2C_FIELD(temp_r4, s32 *, 4) = temp_r0;
    if (temp_r0 == 0) {
        return 1;
    }
    temp_r0_2                    = func_020a9fc8(0x3C, 1, &func_020ab6f4);
    M2C_FIELD(temp_r4, s32 *, 8) = temp_r0_2;
    if (temp_r0_2 == 0) {
        return 1;
    }
    func_020bbc88(M2C_FIELD(temp_r4, s32 *, 0), &func_020abcfc);
    func_020bb918(M2C_FIELD(temp_r4, s32 *, 0), &func_020abd5c);
    M2C_FIELD(temp_r4, s32 *, 0x34) = func_020bbc58(M2C_FIELD(temp_r4, s32 *, 0));
    M2C_FIELD(temp_r4, s16 *, 0x38) = func_020bbc60(M2C_FIELD(temp_r4, s32 *, 0));
    M2C_FIELD(temp_r4, s32 *, 0x30) = 0;
    M2C_FIELD(temp_r4, s32 *, 0xC)  = 1;
    if (argA != 0) {
        M2C_FIELD(temp_r4, s32 *, 0x2C) = argA;
    } else {
        M2C_FIELD(temp_r4, s32 *, 0x2C) = 0;
    }
    return 0;
}
