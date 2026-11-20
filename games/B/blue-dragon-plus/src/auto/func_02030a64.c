#include "m2c.h"

M2C_UNK func_0201f33c(void *, M2C_UNK);             /* extern */
M2C_UNK func_02036eac(void *, M2C_UNK *, void *, s32, s32, s32); /* extern */
M2C_UNK func_02037170(void *);                      /* extern */
M2C_UNK func_020374ec(void *);                      /* extern */
extern M2C_UNK func_02031750;

void func_02030a64(void *arg0, s32 arg1) {
    func_02036eac(arg0, &func_02031750, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_0201f33c(arg0 + 0x4E0, 0);
    func_020374ec(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
    func_02037170(arg0);
}
