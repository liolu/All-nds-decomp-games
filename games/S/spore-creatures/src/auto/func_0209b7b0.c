#include "m2c.h"

s8 func_0209179c(M2C_UNK, M2C_UNK);                 /* extern */
s8 func_02091854(M2C_UNK, M2C_UNK);                 /* extern */
M2C_UNK func_0209b940(void *);                      /* extern */
M2C_UNK func_0209baa0(s32, M2C_UNK, M2C_UNK, u8);   /* extern */

void func_0209b7b0(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_0209baa0(M2C_FIELD(arg0, s32 *, 0), arg1, arg2, M2C_FIELD(arg0, u8 *, 0xF));
    M2C_FIELD(arg0, s8 *, 0xC) = func_0209179c(arg2, arg1);
    M2C_FIELD(arg0, s8 *, 0xD) = func_02091854(arg2, arg1);
    func_0209b940(arg0);
}
