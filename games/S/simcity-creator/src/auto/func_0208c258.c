#include "m2c.h"

M2C_UNK func_02087e04(void *, u16);                 /* extern */

void func_0208c258(s32 arg0, s16 arg1, s16 arg2, void *arg3, u16 arg4) {
    M2C_FIELD(arg3, s16 *, 0) = arg1;
    M2C_FIELD(arg3, s16 *, 2) = arg2;
    M2C_FIELD(arg3, s16 *, 4) = arg1;
    M2C_FIELD(arg3, s16 *, 6) = arg2;
    func_02087e04(arg3, arg4);
}
