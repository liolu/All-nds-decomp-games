#include "m2c.h"

extern M2C_UNK data_021e365c;
extern M2C_UNK data_021e3674;

M2C_UNK _Z20DisableIRQInterruptsv();
void _Z20SetIRQInterruptStatei(s32 arg0);
s32 func_020d7db0(void *arc);
void func_020d7e4c(void *arc);

u32 func_020d86d8(u32 dma) {
    s32 saved;
    s32 old;
    s32 suspended;

    saved                                 = _Z20DisableIRQInterruptsv();
    old                                   = M2C_FIELD(&data_021e365c, s32 *, 0x4);
    suspended                             = func_020d7db0(&data_021e3674);
    M2C_FIELD(&data_021e365c, s32 *, 0x4) = dma;
    if (suspended != 0) {
        func_020d7e4c(&data_021e3674);
    }
    _Z20SetIRQInterruptStatei(saved);
    return old;
}
