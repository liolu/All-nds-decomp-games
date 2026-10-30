#include "m2c.h"

M2C_UNK func_02086948(M2C_UNK, void *);             /* extern */

s32 func_02086b90(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x58) == 0) {
        return 0;
    }
    func_02086948(arg1, arg0 + 0x10 + (M2C_FIELD(arg0, s32 *, 0x54) * 0x10));
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) ((M2C_FIELD(arg0, s32 *, 0x54) + 1) & 3);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) - 1);
    return 1;
}
