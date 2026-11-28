#include "m2c.h"

M2C_UNK func_02008388(s32, M2C_UNK);                /* extern */
M2C_UNK func_0206d4cc(s32);                         /* extern */

void func_0206d870(s32 arg0) {
    func_02008388(arg0 + 0x68, 0x1000);
    func_0206d4cc(arg0);
}
