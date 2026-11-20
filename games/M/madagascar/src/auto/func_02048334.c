/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0207b068(M2C_UNK);                       /* extern */
extern void *data_020d8820;
extern void *data_020d8824;

void func_02048334(void) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0 = func_0207b068(0x10);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 0)   = 0;
        M2C_FIELD(temp_r0, s32 *, 4)   = 0;
        M2C_FIELD(temp_r0, s32 *, 8)   = 0x20000;
        M2C_FIELD(temp_r0, s32 *, 0xC) = 0x18000;
    }
    data_020d8820 = temp_r0;
    temp_r0_2     = func_0207b068(0x10);
    if (temp_r0_2 != NULL) {
        M2C_FIELD(temp_r0_2, s32 *, 0)   = 0;
        M2C_FIELD(temp_r0_2, s32 *, 4)   = 0;
        M2C_FIELD(temp_r0_2, s32 *, 8)   = 0x10000;
        M2C_FIELD(temp_r0_2, s32 *, 0xC) = 0xC000;
    }
    data_020d8824 = temp_r0_2;
}
