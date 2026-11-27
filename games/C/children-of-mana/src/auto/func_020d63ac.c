/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020e8160(s32);                             /* extern */
M2C_UNK func_020e8da8(s32);                         /* extern */

void func_020d63ac(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_020e8da8(M2C_FIELD(arg0, s32 *, 0x1C));
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
            return;
        case 1:
            if (func_020e8160(M2C_FIELD(arg0, s32 *, 0x1C)) != 0) {
                M2C_FIELD(arg0, s32 *, 0) = 0;
            }
            return;
    }
}
