#include "m2c.h"

M2C_UNK func_020965bc(void *, M2C_UNK);             /* extern */
M2C_UNK func_02097d20(void *, M2C_UNK);             /* extern */

void *func_02035f68(void *arg0, M2C_UNK arg1) {
    func_020965bc(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & ~1);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) ((M2C_FIELD(arg0, s32 *, 0x2C) & ~0xC00) | 0xC00);
    func_02097d20(arg0, arg1);
    return arg0;
}
