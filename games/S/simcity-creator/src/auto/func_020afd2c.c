#include "m2c.h"

M2C_UNK func_02005bc4(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_0202ce2c(s32);                         /* extern */

void func_020afd2c(void *arg0) {
    func_0202ce2c(M2C_FIELD(arg0, s32 *, 0x144));
    func_02005bc4(0, -1, M2C_FIELD(arg0, s32 *, 8));
    func_02005bc4(0, -1, M2C_FIELD(arg0, s32 *, 4));
    func_02005bc4(0, -1, M2C_FIELD(arg0, s32 *, 0));
}
