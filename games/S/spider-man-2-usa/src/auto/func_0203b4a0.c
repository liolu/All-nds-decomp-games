/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0203a6cc(M2C_UNK);                       /* extern */
extern void *data_0215f068;
extern void *data_0215f06c;

void func_0203b4a0(void) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0 = func_0203a6cc(0x10);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 0)   = 0;
        M2C_FIELD(temp_r0, s32 *, 4)   = 0;
        M2C_FIELD(temp_r0, s32 *, 8)   = 0x2000;
        M2C_FIELD(temp_r0, s32 *, 0xC) = 0x1800;
    }
    data_0215f06c = temp_r0;
    temp_r0_2     = func_0203a6cc(0x10);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(temp_r0_2, s32 *, 0)   = 0;
        M2C_FIELD(temp_r0_2, s32 *, 4)   = 0;
        M2C_FIELD(temp_r0_2, s32 *, 8)   = 0x4000;
        M2C_FIELD(temp_r0_2, s32 *, 0xC) = 0x3000;
    }
    data_0215f068 = temp_r0_2;
}
