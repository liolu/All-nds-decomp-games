#include "m2c.h"

M2C_UNK func_0202b750(void *);                      /* extern */
M2C_UNK func_0202b7d4(void *);                      /* extern */
M2C_UNK func_0202b89c(void *, s16);                 /* extern */
M2C_UNK func_0202b9a8(void *, s16, M2C_UNK, s32);   /* extern */

void func_0202b708(void *arg0, s32 arg1, s16 arg2, M2C_UNK arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
    M2C_FIELD(arg0, s16 *, 0x16) = arg2;
    func_0202b89c(arg0, arg2);
    func_0202b7d4(arg0);
    func_0202b750(arg0);
    func_0202b9a8(arg0, arg2, arg3, arg4);
}
