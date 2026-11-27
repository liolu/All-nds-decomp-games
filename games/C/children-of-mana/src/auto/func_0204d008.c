/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

void func_0204d008(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r6;
    s32 var_r6_2;
    void **temp_r0_2;
    void **temp_r0_3;
    void **temp_r0_4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x10);
    switch (temp_r0) {                              /* irregular */
        case 0:
            var_r6 = 0;
            do {
                temp_r0_2 = M2C_FIELD((arg0 + (var_r6 * 4)), void ***, 0x140);
                M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, M2C_UNK), 0xA8)(temp_r0_2, arg1);
                var_r6 += 1;
            } while (var_r6 <= 7);
            break;
        case 1:
            var_r6_2 = 8;
            do {
                temp_r0_3 = M2C_FIELD((arg0 + (var_r6_2 * 4)), void ***, 0x140);
                M2C_FIELD(*temp_r0_3, M2C_UNK(**)(void **, M2C_UNK), 0xA8)(temp_r0_3, arg1);
                var_r6_2 += 1;
            } while (var_r6_2 <= 0xD);
            break;
    }
    temp_r0_4 = M2C_FIELD(arg0, void ***, 0x178);
    M2C_FIELD(*temp_r0_4, M2C_UNK(**)(void **, M2C_UNK), 0xA8)(temp_r0_4, arg1);
}
