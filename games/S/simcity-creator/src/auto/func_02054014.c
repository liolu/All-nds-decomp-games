#include "m2c.h"

M2C_UNK func_02054f4c(s32);                         /* extern */
M2C_UNK func_02056960(s32);                         /* extern */
M2C_UNK func_020580dc(s32);                         /* extern */
M2C_UNK func_020ade7c(s32);                         /* extern */

void func_02054014(void *arg0) {
    func_02054f4c(M2C_FIELD(arg0, s32 *, 0x24));
    func_020580dc(M2C_FIELD(arg0, s32 *, 0x10));
    func_020580dc(M2C_FIELD(arg0, s32 *, 0x14));
    func_020580dc(M2C_FIELD(arg0, s32 *, 0x18));
    func_02056960(M2C_FIELD(arg0, s32 *, 0x1C));
    func_020ade7c(M2C_FIELD(arg0, s32 *, 0x28));
}
