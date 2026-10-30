#include "m2c.h"

M2C_UNK func_02080dc0(s32, M2C_UNK);                /* extern */
M2C_UNK func_020814b0(s32);                         /* extern */
M2C_UNK func_0208c648(s32, M2C_UNK);                /* extern */

void func_02082940(void *arg0, M2C_UNK arg1) {
    func_020814b0(M2C_FIELD(arg0, s32 *, 0x18));
    func_0208c648(M2C_FIELD(arg0, s32 *, 8), arg1);
    func_02080dc0(M2C_FIELD(arg0, s32 *, 0x10), arg1);
}
