/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020e6d80(s32);                             /* extern */
M2C_UNK func_020e70bc(s32, u8);                     /* extern */

void func_020d670c(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_020e70bc(M2C_FIELD(arg0, s32 *, 0x18), M2C_FIELD(arg0, u8 *, 0x58));
            M2C_FIELD(arg0, s32 *, 0x28) = 0;
            M2C_FIELD(arg0, s32 *, 4)    = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
            return;
        case 1:
            if (func_020e6d80(M2C_FIELD(arg0, s32 *, 0x18)) != 0) {
                M2C_FIELD(arg0, s32 *, 0) = 0xE;
            }
            return;
    }
}
