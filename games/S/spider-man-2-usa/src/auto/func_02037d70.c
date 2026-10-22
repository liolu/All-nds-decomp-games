/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203a640(s32, s32);                    /* extern */
M2C_UNK func_02057498();                            /* extern */

void func_02037d70(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r2;

    func_02057498();
    temp_r2 = M2C_FIELD(arg0, s32 *, 0xC);
    func_0203a640((arg2 * temp_r2) + M2C_FIELD(arg0, s32 *, 4), (arg1 * temp_r2) + M2C_FIELD(arg0, s32 *, 0));
}
