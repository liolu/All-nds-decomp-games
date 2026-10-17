/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202a394(void *, void *, u16, M2C_UNK, s32); /* extern */
M2C_UNK func_020647a0(M2C_UNK, void *, s16);        /* extern */
M2C_UNK func_0207b000(void *);                      /* extern */
void *func_0207b00c(u16);                           /* extern */

void func_02029b50(void *arg0, M2C_UNK arg1, s16 arg2) {
    u16 temp_r4;
    void *temp_r0;

    if (M2C_FIELD(arg0, u16 *, 0x4AA) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x57C) != 0) {
        return;
    }
    temp_r4                      = arg2 + 6;
    M2C_FIELD(arg0, u8 *, 0x57C) = 1U;
    temp_r0                      = func_0207b00c(temp_r4);
    M2C_FIELD(temp_r0, s32 *, 0) = 1;
    M2C_FIELD(temp_r0, s16 *, 4) = arg2;
    func_020647a0(arg1, temp_r0 + 6, arg2);
    func_0202a394(arg0, temp_r0, temp_r4, 0, 0xF);
    func_0207b000(temp_r0);
}
