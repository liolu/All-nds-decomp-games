/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0210e258;

void func_020e19e0(void *arg0) {
    void **temp_r0;

    M2C_FIELD(arg0, s32 *, 0x20) = 4;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    temp_r0                      = M2C_FIELD(arg0, void ***, 0x14);
    if (temp_r0 != NULL) {
        M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, s32), 0x44)(temp_r0, 0x11E);
    }
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) * ((u16 *) ((s8 *) &data_0210e258 + (M2C_FIELD(arg0, s32 *, 4) * 8)));
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
}
