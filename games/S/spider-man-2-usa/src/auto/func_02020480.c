/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203a640(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_020574fc(s32, M2C_UNK);                /* extern */

void func_02020480(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;

    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x114) = arg2;
    temp_r4                                      = arg1 * 0x10;
    func_020574fc(M2C_FIELD(arg0, s32 *, 0x110) + (temp_r4 * 2), 0x20);
    func_0203a640(M2C_FIELD(arg0, s32 *, 0x110) + (temp_r4 * 2), arg2, 0x20);
}
