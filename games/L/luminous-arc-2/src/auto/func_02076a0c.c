#include "m2c.h"

M2C_UNK func_02076fe0(void *);                      /* extern */

void func_02076a0c(void *arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg1, u16 *, 6)     = (u16) ((M2C_FIELD(arg1, u16 *, 6) | 1) & ~2);
    M2C_FIELD(arg1, s32 *, 0x14C) = (s32) (M2C_FIELD(arg1, s32 *, 0x14C) | ((arg2 << 0x10) + 0x1FF));
    func_02076fe0(arg1 + 0x3C);
    if (M2C_FIELD(arg1, void **, 0x15C) == arg0) {
        return;
    }
    M2C_FIELD(arg1, void **, 0x158) = (void *) M2C_FIELD(arg0, void **, 0xB8);
    M2C_FIELD(arg0, void **, 0xB8)  = arg1;
    M2C_FIELD(arg1, void **, 0x15C) = arg0;
}
