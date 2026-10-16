#include "m2c.h"

M2C_UNK func_020ae648(void *, M2C_UNK);             /* extern */
M2C_UNK func_020b4efc(void *, M2C_UNK *, void *, s32, s32, s32); /* extern */
M2C_UNK func_020b5298(void *);                      /* extern */
M2C_UNK func_020b5964(void *);                      /* extern */
extern M2C_UNK func_020883bc;

void func_02087550(void *arg0, s32 arg1) {
    func_020b4efc(arg0, &func_020883bc, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_020ae648(arg0 + 0x4E0, 0);
    func_020b5964(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
    func_020b5298(arg0);
}
