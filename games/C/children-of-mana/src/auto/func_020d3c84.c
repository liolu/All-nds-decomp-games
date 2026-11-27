/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02035fe8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0203e45c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_020d3c84(void *arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;
    void **temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    switch (temp_r0) {                              /* irregular */
        case 2:
            M2C_FIELD(arg0, s8 *, 0x46) = 1;
            M2C_FIELD(arg0, s32 *, 4)   = 3;
            return;
        case 0:
            if (M2C_FIELD(arg0, u8 *, 0x45) != 0) {
                var_r1                    = 4;
                M2C_FIELD(arg0, s32 *, 8) = 4;
            } else {
                var_r1 = 0;
            }
            temp_r0_2 = M2C_FIELD(arg0, void ***, 0x10);
            M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK), 0xC)(temp_r0_2, var_r1, 0);
            M2C_FIELD(arg0, s8 *, 0x48) = 0;
            if (M2C_FIELD(arg0, u8 *, 0x44) != 0) {
                func_02035fe8(0x10, 1);
                M2C_FIELD(arg0, s32 *, 8) = 0x10;
            }
            if ((M2C_FIELD(arg0, u8 *, 0x45) == 0) && (M2C_FIELD(arg0, u8 *, 0x44) == 0)) {
                M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 2);
            } else {
                M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
            }
            *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1300;
            func_0203e45c(4, 0, 0);
            func_0203e45c(5, 0, 0);
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 8) <= 0) {
                M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
            }
            return;
    }
}
