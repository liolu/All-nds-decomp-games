#include "m2c.h"

M2C_UNK func_0206b358(s32);                         /* extern */
M2C_UNK func_02071c48(s32);                         /* extern */
M2C_UNK func_020742cc();                            /* extern */

void func_0206e62c(void *arg0) {
    func_02071c48(M2C_FIELD(arg0, s32 *, 8));
    func_020742cc();
    func_0206b358(M2C_FIELD(arg0, s32 *, 0xC));
}
