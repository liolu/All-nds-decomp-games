/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204919c(s32);                             /* extern */
M2C_UNK func_0204a3c8(s32, u8);                     /* extern */

void func_020d658c(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_0204a3c8(M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, u8 *, 0x58));
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
            return;
        case 1:
            if (func_0204919c(M2C_FIELD(arg0, s32 *, 8)) != 0) {
                M2C_FIELD(arg0, s32 *, 0) = 0;
            }
            return;
    }
}
