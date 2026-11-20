/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020254b8();                                /* extern */
M2C_UNK func_020255a4(M2C_UNK, s32);                /* extern */
s32 func_020484b4(s32 **);                          /* extern */

void func_02025744(M2C_UNK arg0, void *arg1) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 0:
            func_020255a4(arg0, func_020484b4(M2C_FIELD(arg1, s32 ***, 8)));
            return;
        case 1:
            **M2C_FIELD(arg1, s32 ***, 8) = func_020254b8();
            return;
    }
}
