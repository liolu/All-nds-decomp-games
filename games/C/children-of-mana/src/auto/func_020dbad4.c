/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02035fd4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020dbf70();                            /* extern */
M2C_UNK func_020dc6a4(void *, M2C_UNK);             /* extern */

void func_020dbad4(void *arg0) {
    s32 temp_r1;
    void **temp_r0;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0xC);
    switch (temp_r1) {                              /* irregular */
        case 0:
            temp_r0 = M2C_FIELD(arg0, void ***, 0x34);
            if (temp_r0 != NULL) {
                M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0xA8)(temp_r0, 0);
            }
            func_020dc6a4(arg0 + 0x14, 4);
            func_02035fd4(0x10, 0);
            func_02035fd4(0x10, 1);
            M2C_FIELD(arg0, s32 *, 8)   = 0x10;
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 8) <= 0) {
                M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
            }
            return;
        case 2:
            func_020dbf70(arg0);
            M2C_FIELD(arg0, s32 *, 4) = 0;
            return;
    }
}
