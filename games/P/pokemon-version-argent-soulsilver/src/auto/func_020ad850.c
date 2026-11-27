#include "engine.h"
#include "m2c.h"

void func_020d33c0(void);
M2C_UNK func_020d3438(void);
void func_020d365c(void);
M2C_UNK func_020d369c(void);
void func_020d36ac(M2C_UNK);
M2C_UNK _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(M2C_UNK);
void func_020ae7b4(void);
void func_020afe3c(void);

extern s32 data_021d600c;

s32 func_020ad850(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = _Z20DisableIRQInterruptsv();
    if (data_021d600c != 0) {
        _Z20SetIRQInterruptStatei(temp_r0);
        return 1;
    }
    if (arg0 == 0) {
        _Z20SetIRQInterruptStatei(temp_r0);
        return 1;
    }
    if (arg0 & 0x1F) {
        _Z20SetIRQInterruptStatei(temp_r0);
        return 1;
    }
    if ((u32) arg1 < 0x2300U) {
        _Z20SetIRQInterruptStatei(temp_r0);
        return 6;
    }
    data_021d600c                           = arg0;
    M2C_FIELD(arg0, s32 *, 0x2260)          = 1;
    M2C_FIELD(data_021d600c, s16 *, 0x2280) = 0;
    M2C_FIELD(data_021d600c, s16 *, 0x2268) = 0;
    M2C_FIELD(data_021d600c, s8 *, 0x226A)  = 0;
    M2C_FIELD(data_021d600c, s8 *, 0x226B)  = 0;
    M2C_FIELD(data_021d600c, s16 *, 0x2282) = 0;
    M2C_FIELD(data_021d600c, s16 *, 0x22F8) = 0;
    func_020ae7b4();
    func_020afe3c();
    if (func_020d3438() == 0) {
        func_020d33c0();
    }
    if (func_020d369c() == 0) {
        func_020d365c();
    }
    func_020d36ac(data_021d600c + 0x22CC);
    _Z20SetIRQInterruptStatei(temp_r0);
    return 0;
}
