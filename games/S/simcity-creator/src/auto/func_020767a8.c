#include "m2c.h"

M2C_UNK func_02019940();                            /* extern */
M2C_UNK func_02077dc8(s32, M2C_UNK);                /* extern */

void func_020767a8(void **arg0) {
    func_02077dc8(M2C_FIELD(*arg0, s32(**)(), 0x1C)(arg0), 0x13);
    func_02019940();
}
