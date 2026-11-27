/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020cbb3c(s32);                             /* extern */
M2C_UNK func_020cbd00(s32, u8);                     /* extern */

void func_020d652c(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_020cbd00(M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, u8 *, 0x58));
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
            return;
        case 1:
            if (func_020cbb3c(M2C_FIELD(arg0, s32 *, 0x10)) != 0) {
                M2C_FIELD(arg0, s32 *, 0) = 0;
            }
            return;
    }
}
