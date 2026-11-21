#include "m2c.h"
extern s32 _Z20DisableIRQInterruptsv();
extern void _Z20SetIRQInterruptStatei(s32);
extern s32 func_ov013_0221bb90(s32, s32);
extern void func_ov013_0221fdac(s32);
extern void *data_ov013_0224f5dc;
void func_ov013_0223cd10(s32 arg0) {
    u16 m;
    s32 m2;
    s32 old;
    if (func_ov013_0221bb90(arg0, 0) == 0) {
        m   = ~(1 << arg0);
        old = _Z20DisableIRQInterruptsv();
        M2C_FIELD(data_ov013_0224f5dc, u16 *, 2) &= m;
        M2C_FIELD(data_ov013_0224f5dc, u16 *, 4) &= m;
        M2C_FIELD(data_ov013_0224f5dc, u16 *, 6) &= m;
        M2C_FIELD(data_ov013_0224f5dc, u16 *, 8) &= m;
        M2C_FIELD(data_ov013_0224f5dc, u16 *, 0xA) &= m;
        M2C_FIELD(data_ov013_0224f5dc, u16 *, 0xC) &= m;
        _Z20SetIRQInterruptStatei(old);
        func_ov013_0221fdac(arg0);
        return;
    }
    old = _Z20DisableIRQInterruptsv();
    m2  = ~(1 << arg0);
    M2C_FIELD(data_ov013_0224f5dc, u16 *, 4) &= m2;
    M2C_FIELD(data_ov013_0224f5dc, u16 *, 2) &= m2;
    _Z20SetIRQInterruptStatei(old);
}
