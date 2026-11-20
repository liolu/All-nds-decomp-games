#include "m2c.h"

M2C_UNK func_0202b6cc(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202b6e0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202b6f4(void *, s32);                 /* extern */
M2C_UNK func_0202b750(void *);                      /* extern */
M2C_UNK func_0202b7d4(void *);                      /* extern */
M2C_UNK func_0202b89c(void *, s16);                 /* extern */

void func_0202b5c8(void *arg0, s16 arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_0202b6e0(arg0, arg2);
    func_0202b6cc(arg0, arg3);
    func_0202b6f4(arg0, arg4);
    M2C_FIELD(arg0, s16 *, 0x16) = arg1;
    func_0202b89c(arg0, arg1);
    func_0202b7d4(arg0);
    func_0202b750(arg0);
}
