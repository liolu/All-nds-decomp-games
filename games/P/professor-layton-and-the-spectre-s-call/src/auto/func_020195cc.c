#include "m2c.h"

M2C_UNK func_02015d08(s32, M2C_UNK);                /* extern */
M2C_UNK func_02018914();                            /* extern */
M2C_UNK func_02018928();                            /* extern */

void func_020195cc(s32 arg0, s32 arg1, s32 arg2) {
    func_02018914();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_02015d08(arg0 + 0x3C + (arg1 * 4), 4);
    func_02018928();
}
