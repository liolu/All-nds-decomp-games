/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010be4(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
void **func_020bf594(M2C_UNK);                      /* extern */
extern M2C_UNK data_020fd270;

void *func_02032a44(void *arg0) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;

    M2C_FIELD(arg0, s32 *, 4)       = 0;
    M2C_FIELD(arg0, s32 *, 8)       = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0)  = &data_020fd270;
    M2C_FIELD(arg0, s8 *, 0xC)      = 0;
    M2C_FIELD(arg0, void ***, 0x10) = NULL;
    func_02010be4(arg0 + 0x20, 0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x30)    = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x34)    = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x38)    = 0x1000;
    M2C_FIELD(arg0, void ***, 0x10) = func_020bf594(0xE);
    temp_r0                         = M2C_FIELD(arg0, void ***, 0x10);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x4C)(temp_r0, 1);
    temp_r0_2 = M2C_FIELD(arg0, void ***, 0x10);
    M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, M2C_UNK), 0x2C)(temp_r0_2, -0x200000);
    temp_r0_3 = M2C_FIELD(arg0, void ***, 0x10);
    M2C_FIELD(*temp_r0_3, M2C_UNK(**)(void **, M2C_UNK), 0x1C)(temp_r0_3, 0);
    return arg0;
}
