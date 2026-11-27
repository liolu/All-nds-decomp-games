#include "m2c.h"

M2C_UNK func_02021a08(void *, M2C_UNK, s32, u16, s32, s32); /* extern */
s32 func_02094d64(M2C_UNK, M2C_UNK);                /* extern */

void func_0205db7c(void *arg0, M2C_UNK arg1, s32 arg2) {
    func_02021a08(arg0 + 0x38, arg1, M2C_FIELD(arg0, s32 *, 4),
                  M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 8), u16 *, 4), arg2, func_02094d64(0, 0));
}
