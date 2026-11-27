/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02035fd4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0204a44c();                            /* extern */
M2C_UNK func_0204a6d4(void *);                      /* extern */

void func_02049678(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x14C);
    switch (temp_r1) {                              /* irregular */
        case 0:
            if (M2C_FIELD(arg0, u8 *, 0x150) == 0) {
                M2C_FIELD(arg0, s32 *, 0x14C) = (s32) (temp_r1 + 2);
                return;
            }
            func_02035fd4(4, 1);
            M2C_FIELD(arg0, s32 *, 8)     = 4;
            M2C_FIELD(arg0, s32 *, 0x14C) = (s32) (M2C_FIELD(arg0, s32 *, 0x14C) + 1);
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 8) <= 0) {
                M2C_FIELD(arg0, s32 *, 0x14C) = (s32) (M2C_FIELD(arg0, s32 *, 0x14C) + 1);
            }
            return;
        case 2:
            func_0204a44c();
            func_0204a6d4(arg0);
            M2C_FIELD(arg0, s32 *, 4) = 0;
            return;
    }
}
