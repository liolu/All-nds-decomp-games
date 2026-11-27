/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02035fd4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020d29b0(s32);                         /* extern */
M2C_UNK func_020eaef8();                            /* extern */

void func_020eaa14(void *arg0) {
    s32 temp_r1;
    void **temp_r0;
    void **temp_r0_2;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x10);
    switch (temp_r1) {                              /* irregular */
        case 0:
            if (M2C_FIELD(arg0, s32 *, 8) == 0) {
                temp_r0 = M2C_FIELD(arg0, void ***, 0x14);
                M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0xA8)(temp_r0, 0);
                temp_r0_2 = M2C_FIELD(arg0, void ***, 0x14);
                M2C_FIELD(*temp_r0_2, M2C_UNK(**)(void **, M2C_UNK, M2C_UNK), 0x10)(temp_r0_2, 4, 0);
            }
            func_020d29b0(M2C_FIELD(arg0, s32 *, 0x28));
            func_02035fd4(0x10, 1);
            M2C_FIELD(arg0, s32 *, 0xC)  = 0x10;
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0xC) <= 0) {
                M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + 1);
            }
            return;
        case 2:
            func_020eaef8(arg0);
            M2C_FIELD(arg0, s32 *, 4)    = 0;
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
            return;
    }
}
