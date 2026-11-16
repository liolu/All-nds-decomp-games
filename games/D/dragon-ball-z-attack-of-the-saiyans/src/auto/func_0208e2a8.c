#include "m2c.h"

M2C_UNK func_0208a958(void *, M2C_UNK);             /* extern */
M2C_UNK func_020841c0(void *, M2C_UNK *, void *, s32, s32, s32); /* extern */
M2C_UNK func_02084484(void *);                      /* extern */
M2C_UNK func_02084818(void *);                      /* extern */
extern M2C_UNK func_0208ef94;

void func_0208e2a8(void *arg0, s32 arg1) {
    func_020841c0(arg0, &func_0208ef94, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_0208a958(arg0 + 0x4E0, 0);
    func_02084818(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
    func_02084484(arg0);
}
