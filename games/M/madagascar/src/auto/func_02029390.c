/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202a394(void *, void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0207b000(void *);                      /* extern */
void *func_0207b00c(M2C_UNK);                       /* extern */

void func_02029390(void *arg0) {
    void *temp_r0;

    temp_r0                      = func_0207b00c(6);
    M2C_FIELD(temp_r0, s32 *, 0) = 3;
    M2C_FIELD(temp_r0, u16 *, 4) = (u16) M2C_FIELD(arg0, u16 *, 0x4F4);
    func_0202a394(arg0, temp_r0, 6, 0, 0xD);
    func_0207b000(temp_r0);
}
