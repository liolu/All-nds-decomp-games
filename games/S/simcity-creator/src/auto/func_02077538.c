#include "m2c.h"

M2C_UNK func_02006e64(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_0207b634(void *, M2C_UNK);             /* extern */
M2C_UNK func_020ab6cc(void *);                      /* extern */

void func_02077538(void *arg0) {
    func_02006e64(0, M2C_FIELD(arg0, s32 *, 0) + 0x54D0C, 0x400);
    func_020ab6cc(arg0 + 0x1C);
    M2C_FIELD(arg0, s8 *, 0x10) = 0;
    func_0207b634(arg0 + 0x14, 1);
}
