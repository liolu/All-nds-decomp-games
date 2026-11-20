/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02043cf8(M2C_UNK, s32);                /* extern */
M2C_UNK func_02043d14();                            /* extern */
M2C_UNK func_02054bc8(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_020541ec(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02043cf8(arg2, (arg0 + 0x1F) & ~0x1F);
    func_02043d14();
    func_02054bc8(arg2, arg0, arg1);
}
