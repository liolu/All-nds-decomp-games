/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020df0fc();                      /* extern */
M2C_UNK func_020f30a4();                      /* extern */

void func_020e038c(void *arg0, u32 arg1) {
    void **temp_r0;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;
    void **temp_r0_5;

    M2C_FIELD(arg0, s32 *, 0x1F44) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F48) = 0;
    switch (arg1) {
        default:
            break;
        case 0:
            func_020df0fc(arg0);
            M2C_FIELD(arg0, s8 *, 0x1F5D) = 1;
            M2C_FIELD(arg0, s8 *, 0x1F5E) = 0;
            break;
        case 1:
            temp_r0 = M2C_FIELD(arg0, void ***, 0x1F40);
            if (temp_r0 != NULL) {
                M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x44)(temp_r0, 0x3E);
            }
            break;
        case 3:
            temp_r0_2 = M2C_FIELD(arg0, void ***, 0x1F40);
            if (temp_r0_2 != NULL) {
                M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, M2C_UNK), 0x44)(temp_r0_2, 0x3F);
            }
            func_020df0fc(arg0);
            temp_r0_3 = M2C_FIELD(arg0, void ***, 0xA0);
            if (temp_r0_3 != NULL) {
                M2C_FIELD(*temp_r0_3, M2C_UNK(**)(void **, M2C_UNK), 0xC8)(temp_r0_3, 0);
                temp_r0_4 = M2C_FIELD(arg0, void ***, 0xA0);
                M2C_FIELD(*temp_r0_4, M2C_UNK(**)(void **, M2C_UNK), 0xD0)(temp_r0_4, 1);
            }
            M2C_FIELD(arg0, s8 *, 0x1F5C) = 1;
            break;
        case 4:
            temp_r0_5 = M2C_FIELD(arg0, void ***, 0x1F40);
            if (temp_r0_5 != NULL) {
                M2C_FIELD(*temp_r0_5, M2C_UNK(**)(void **, M2C_UNK), 0x44)(temp_r0_5, 0x40);
            }
            func_020f30a4(arg0 + 0xEB8);
            break;
    }
    M2C_FIELD(arg0, u32 *, 0x18) = arg1;
}
