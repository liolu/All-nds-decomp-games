#include "m2c.h"
typedef struct {
    u16 a[8];
} T;
extern T *data_ov013_0224f5dc;
s32 func_ov013_0221bb90(s32, s32);
s32 _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(s32);
void func_ov013_0221fdac(s32);
void func_ov013_0223cc70(s32 aid) {
    u16 mask;
    s32 en;
    if (func_ov013_0221bb90(aid, 1) != 0) {
        return;
    }
    mask = (u16) ~(1 << aid);
    en   = _Z20DisableIRQInterruptsv();
    data_ov013_0224f5dc->a[1] &= mask;
    data_ov013_0224f5dc->a[2] &= mask;
    data_ov013_0224f5dc->a[3] &= mask;
    data_ov013_0224f5dc->a[4] &= mask;
    data_ov013_0224f5dc->a[5] &= mask;
    data_ov013_0224f5dc->a[6] &= mask;
    _Z20SetIRQInterruptStatei(en);
    func_ov013_0221fdac(aid);
}
