#include "m2c.h"

M2C_UNK func_02054f8c(s32);                         /* extern */
M2C_UNK func_02056988(s32);                         /* extern */
M2C_UNK func_02058118(s32);                         /* extern */

void func_02054050(void *arg0) {
    func_02054f8c(M2C_FIELD(arg0, s32 *, 0x24));
    func_02058118(M2C_FIELD(arg0, s32 *, 0x10));
    func_02058118(M2C_FIELD(arg0, s32 *, 0x14));
    func_02058118(M2C_FIELD(arg0, s32 *, 0x18));
    func_02056988(M2C_FIELD(arg0, s32 *, 0x1C));
}
