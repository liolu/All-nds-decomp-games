#include "m2c.h"

M2C_UNK func_02018afc(s32, M2C_UNK);                /* extern */
M2C_UNK func_0201edc8();                            /* extern */
M2C_UNK func_0201eddc();                            /* extern */

void func_0201fa60(s32 arg0, s32 arg1, s32 arg2) {
    func_0201edc8();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_02018afc(arg0 + 0x3C + (arg1 * 4), 4);
    func_0201eddc();
}
