#include "m2c.h"

M2C_UNK func_02054d48(s32);                         /* extern */
M2C_UNK func_02055fe8(s32);                         /* extern */
M2C_UNK func_02056904(s32);                         /* extern */
M2C_UNK func_02057884(s32);                         /* extern */

void func_02054adc(void *arg0) {
    func_02057884(M2C_FIELD(arg0, s32 *, 0x10));
    func_02057884(M2C_FIELD(arg0, s32 *, 0x14));
    func_02057884(M2C_FIELD(arg0, s32 *, 0x18));
    func_02056904(M2C_FIELD(arg0, s32 *, 0x1C));
    func_02054d48(M2C_FIELD(arg0, s32 *, 0x24));
    func_02055fe8(M2C_FIELD(arg0, s32 *, 0x20));
}
