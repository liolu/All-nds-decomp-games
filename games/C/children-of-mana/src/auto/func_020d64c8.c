/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020d39d0(s32);                             /* extern */
M2C_UNK func_020d3e4c(s32, u8, u8);                 /* extern */

void func_020d64c8(void *arg0) {
    s32 temp_r0;
    u8 temp_r1;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 0:
            temp_r1 = M2C_FIELD(arg0, u8 *, 0x58);
            func_020d3e4c(M2C_FIELD(arg0, s32 *, 0xC), temp_r1, temp_r1);
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
            return;
        case 1:
            if (func_020d39d0(M2C_FIELD(arg0, s32 *, 0xC)) != 0) {
                M2C_FIELD(arg0, s32 *, 0) = 0;
            }
            return;
    }
}
