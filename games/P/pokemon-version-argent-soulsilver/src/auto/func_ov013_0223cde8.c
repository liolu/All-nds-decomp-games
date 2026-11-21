#include "m2c.h"
extern void func_ov013_0221fdac(s32);
extern s32 _Z20DisableIRQInterruptsv(void);
extern void _Z20SetIRQInterruptStatei(s32);
extern s32 func_ov013_0221bb90(s32, s32);
extern u8 *data_ov013_0224f5dc;
void func_ov013_0223cde8(s32 arg0) {
    s32 mask;
    s32 e;
    if (func_ov013_0221bb90(arg0, 2) == 0) {
        mask                                 = ~(1 << arg0) & 0xFFFF;
        e                                    = _Z20DisableIRQInterruptsv();
        *(u16 *) (data_ov013_0224f5dc + 2)   = *(u16 *) (data_ov013_0224f5dc + 2) & mask;
        *(u16 *) (data_ov013_0224f5dc + 4)   = *(u16 *) (data_ov013_0224f5dc + 4) & mask;
        *(u16 *) (data_ov013_0224f5dc + 6)   = *(u16 *) (data_ov013_0224f5dc + 6) & mask;
        *(u16 *) (data_ov013_0224f5dc + 8)   = *(u16 *) (data_ov013_0224f5dc + 8) & mask;
        *(u16 *) (data_ov013_0224f5dc + 0xA) = *(u16 *) (data_ov013_0224f5dc + 0xA) & mask;
        *(u16 *) (data_ov013_0224f5dc + 0xC) = *(u16 *) (data_ov013_0224f5dc + 0xC) & mask;
        _Z20SetIRQInterruptStatei(e);
        func_ov013_0221fdac(arg0);
        return;
    }
    e                                  = _Z20DisableIRQInterruptsv();
    *(u16 *) (data_ov013_0224f5dc + 6) = *(u16 *) (data_ov013_0224f5dc + 6) & ~(1 << arg0);
    *(u16 *) (data_ov013_0224f5dc + 8) = *(u16 *) (data_ov013_0224f5dc + 8) | (1 << arg0);
    _Z20SetIRQInterruptStatei(e);
}
