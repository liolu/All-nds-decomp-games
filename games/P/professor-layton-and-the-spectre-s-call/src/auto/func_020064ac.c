#include "engine.h"
#include "m2c.h"

void func_02005b70(M2C_UNK, M2C_UNK);
void func_02005f2c(M2C_UNK);
void func_0200645c(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02033c20;

void func_020064ac(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s32 var_r0;

    var_r0 = 1;
    if (arg8 != 0) {
        var_r0 = 2;
    }
    func_0200645c(var_r0, arg3, arg4);
    M2C_FIELD(&data_02033c20, s32 *, 0x4FC) = arg0;
    M2C_FIELD(&data_02033c20, s32 *, 0x500) = arg1;
    M2C_FIELD(&data_02033c20, s32 *, 0x504) = arg2;
    M2C_FIELD(&data_02033c20, s32 *, 0x510) = arg6;
    M2C_FIELD(&data_02033c20, s32 *, 0x514) = arg7;
    M2C_FIELD(&data_02033c20, s32 *, 0x518) = arg8;
    func_02005b70((s32) func_02005f2c, arg5);
}
