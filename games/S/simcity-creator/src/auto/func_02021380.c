#include "m2c.h"

M2C_UNK func_02006ee8(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_0201c9ec(s32, M2C_UNK, void *, s32);   /* extern */
s32 func_0201cb50(void *);                          /* extern */
void *func_020348ec(s32);                           /* extern */
M2C_UNK func_0203491c(void *);                      /* extern */

void func_02021380(void *arg0) {
    void *temp_r0;
    void *temp_r4;

    temp_r0                   = func_020348ec(0x6C768);
    temp_r4                   = temp_r0;
    M2C_FIELD(arg0, s32 *, 4) = 3;
    func_02006ee8(temp_r0, 0, 0x6C768);
    func_02006ee8(arg0 + 0x34AC, 0, 0x38);
    M2C_FIELD(arg0, s8 *, 0x34A8) = 0x33;
    M2C_FIELD(arg0, s8 *, 0x34A9) = 1;
    M2C_FIELD(arg0, s8 *, 0x34AA) = 0;
    func_0201c9ec(func_0201cb50(arg0 + 0x1C), 0, temp_r4, 0x6C768);
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    func_0203491c(temp_r4);
}
