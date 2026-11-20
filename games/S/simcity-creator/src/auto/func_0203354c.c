#include "m2c.h"

M2C_UNK func_02028d38(void *, M2C_UNK);             /* extern */
M2C_UNK func_02004ad4(void *, M2C_UNK *, void *, s32, s32, s32); /* extern */
M2C_UNK func_02004e88(void *);                      /* extern */
M2C_UNK func_02005368(void *);                      /* extern */
extern M2C_UNK func_02034238;

void func_0203354c(void *arg0, s32 arg1) {
    func_02004ad4(arg0, &func_02034238, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_02028d38(arg0 + 0x4E0, 0);
    func_02005368(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
    func_02004e88(arg0);
}
