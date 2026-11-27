#include "engine.h"
#include "m2c.h"

void func_020d1bf0(M2C_UNK, M2C_UNK);
void func_020d1c4c(void);
void func_020d1e20(M2C_UNK);
void func_020d18b0(void);
void func_020d2058(M2C_UNK, M2C_UNK);
void func_020d21fc(void);
void func_020d2230(void);
void func_020d226c(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(M2C_UNK);
extern M2C_UNK data_021e169c;

void func_020d1d80(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 var_r2;

    temp_r4 = _Z20DisableIRQInterruptsv();
    if (arg0 == M2C_FIELD(&data_021e169c, s32 *, 0x28)) {
        func_020d1bf0(arg0, arg1);
    }
    func_020d1e20(arg0);
    var_r2 = M2C_FIELD(&data_021e169c, s32 *, 0x1C);
    if (var_r2 == 0) {
        var_r2 = M2C_FIELD(arg0, s32 *, 0x94) - 4;
    }
    func_020d226c(arg0, (s32) func_020d1c4c, var_r2);
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
    M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_020d21fc();
    func_020d2058(arg0, arg2);
    func_020d2230();
    func_020d18b0();
    _Z20SetIRQInterruptStatei(temp_r4);
}
