/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0207a00c(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
M2C_UNK func_0207a4e0(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_02079030(M2C_UNK arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 temp_r0_2;

    switch (arg1) {                                 /* irregular */
        case 0:
        case 1:
            temp_r0 = func_0200f270(0x1C4, 0);
            if (temp_r0 == 0) {
                return;
            }
            func_0207a00c(temp_r0, arg0, arg1, arg2);
            return;
        case 2:
            temp_r0_2 = func_0200f270(0x1C0, 0);
            if (temp_r0_2 == 0) {
                return;
            }
            func_0207a4e0(temp_r0_2, arg0, arg2);
            return;
    }
}
