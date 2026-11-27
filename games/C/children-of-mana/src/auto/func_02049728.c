/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02035fe8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0209167c(s32, s32);                    /* extern */
M2C_UNK func_02091758(s32);                         /* extern */
M2C_UNK func_020919c8(s32);                         /* extern */

void func_02049728(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x14C);
    switch (temp_r0) {                              /* irregular */
        case 2:
            M2C_FIELD(arg0, s8 *, 0x152) = 1;
            M2C_FIELD(arg0, s32 *, 4)    = 3;
            return;
        case 0:
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x10);
            if (temp_r0_2 != 0) {
                func_0209167c(temp_r0_2, M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x148) * 4)), s32 *, 0x24));
                func_02091758(M2C_FIELD(arg0, s32 *, 0x10));
                func_020919c8(M2C_FIELD(arg0, s32 *, 0x10));
            }
            if (M2C_FIELD(arg0, u8 *, 0x150) == 0) {
                M2C_FIELD(arg0, s32 *, 0x14C) = (s32) (M2C_FIELD(arg0, s32 *, 0x14C) + 2);
                return;
            }
            func_02035fe8(4, 1);
            M2C_FIELD(arg0, s32 *, 8)     = 4;
            M2C_FIELD(arg0, s32 *, 0x14C) = (s32) (M2C_FIELD(arg0, s32 *, 0x14C) + 1);
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 8) <= 0) {
                M2C_FIELD(arg0, s32 *, 0x14C) = (s32) (M2C_FIELD(arg0, s32 *, 0x14C) + 1);
            }
            return;
    }
}
