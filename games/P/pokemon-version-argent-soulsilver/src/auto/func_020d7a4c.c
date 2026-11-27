#include "engine.h"
#include "m2c.h"

M2C_UNK _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(M2C_UNK);

extern M2C_UNK data_021e3648;

void func_020d7a4c(s32 arg0) {
    s32 temp_r0;
    void *temp_r2;
    void *temp_r2_2;

    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    temp_r0 = _Z20DisableIRQInterruptsv();
    temp_r2 = M2C_FIELD(arg0, void **, 4);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 8) = (void *) M2C_FIELD(arg0, void **, 8);
    }
    temp_r2_2 = M2C_FIELD(arg0, void **, 8);
    if (temp_r2_2 != NULL) {
        M2C_FIELD(temp_r2_2, void **, 4) = (void *) M2C_FIELD(arg0, void **, 4);
    }
    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, void **, 8)  = NULL;
    M2C_FIELD(arg0, void **, 4)  = NULL;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & ~1);
    if (M2C_FIELD(&data_021e3648, s32 *, 4) == arg0) {
        M2C_FIELD(&data_021e3648, s32 *, 4)   = (s32) M2C_FIELD(&data_021e3648, s32 *, 0);
        M2C_FIELD(&data_021e3648, s32 *, 0xC) = 0;
        M2C_FIELD(&data_021e3648, s16 *, 0xA) = 0;
        M2C_FIELD(&data_021e3648, s16 *, 8)   = 0;
    }
    _Z20SetIRQInterruptStatei(temp_r0);
}
