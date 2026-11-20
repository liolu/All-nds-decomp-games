#include "m2c.h"

u16 func_02070ad8(s32);                             /* extern */
s32 func_02073b08(s32);                             /* extern */

void func_0205dd78(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void **temp_r0;
    void **temp_r0_2;

    M2C_FIELD(arg0, u16 *, 0x3C) = func_02070ad8(M2C_FIELD(arg0, s32 *, 8));
    temp_r0                      = M2C_FIELD((arg0 + (M2C_FIELD(arg0, u16 *, 0x3C) * 4)), void ***, 0x14);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK), 0xC)(temp_r0, arg1, arg2);
    if (func_02073b08(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        return;
    }
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x38);
    M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK), 0xC)(temp_r0_2, arg1, arg2);
}
