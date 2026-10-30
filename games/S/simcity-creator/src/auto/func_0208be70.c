#include "m2c.h"

M2C_UNK func_02070404(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0208ba7c(s32, M2C_UNK *);              /* extern */

void func_0208be70(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp0[8];

    func_02070404(M2C_FIELD(arg0, s32 *, 0xC), arg1, arg2, sp0);
    func_0208ba7c(M2C_FIELD(arg0, s32 *, 0x60B4), sp0);
}
