#include "m2c.h"

M2C_UNK func_0207a034(void *, M2C_UNK);             /* extern */
M2C_UNK func_0207dfa0();                            /* extern */

void *func_02079ff4(void *arg0, M2C_UNK arg1) {
    func_0207dfa0();
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_0207a034(arg0, arg1);
    return arg0;
}
