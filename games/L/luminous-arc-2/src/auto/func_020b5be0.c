#include "m2c.h"

M2C_UNK func_02004978(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s32 func_0201b47c(M2C_UNK *);                       /* extern */
s32 func_020aad08(M2C_UNK);                         /* extern */
s32 func_020aff84(M2C_UNK, void *, M2C_UNK);        /* extern */
s32 func_020aff8c(M2C_UNK, void *, M2C_UNK *, s32); /* extern */
s32 func_020b008c(M2C_UNK, void *, M2C_UNK *);      /* extern */
extern M2C_UNK data_0212e6d0;
extern M2C_UNK data_0212e6d4;

s32 func_020b5be0(M2C_UNK arg0, void *arg1, M2C_UNK *arg2, s32 arg3) {
    u8 sp0[32];
    M2C_UNK *var_r5;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 var_r4;

    var_r5 = arg2;
    var_r4 = arg3;
    if (arg1 == NULL) {
        return 3;
    }
    if (var_r5 == NULL) {
        var_r5 = &data_0212e6d0;
    }
    if (var_r4 == -1) {
        var_r4 = func_0201b47c(var_r5);
    }
    func_02004978(sp0, &data_0212e6d4, var_r4);
    temp_r0_3 = func_020b008c(arg0, arg1, sp0);
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_2 = func_020aff8c(arg0, arg1, var_r5, var_r4);
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    temp_r0 = func_020aff84(arg0, arg1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) (func_020aad08(0) + 0x2710);
    return 0;
}
