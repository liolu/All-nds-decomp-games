/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02035fd4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020e7190();                            /* extern */

void func_020e6dac(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0xC);
    switch (temp_r1) {                              /* irregular */
        case 0:
            if (M2C_FIELD(arg0, u8 *, 0x1C) == 0) {
                M2C_FIELD(arg0, s32 *, 0xC) = 2;
                return;
            }
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
            func_020e7190(arg0);
            M2C_FIELD(arg0, s32 *, 4) = 0;
            return;
    }
}
