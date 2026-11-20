/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200c154();                            /* extern */
s32 func_0200c160();                                /* extern */
M2C_UNK func_0200c254(M2C_UNK, s32 **);             /* extern */

void func_0200c068(M2C_UNK arg0, void *arg1) {
    s32 temp_r1;

    if (M2C_FIELD(arg1, s32 *, 0) != 0x1D) {
        return;
    }
    temp_r1 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 0:
            func_0200c254(arg0, M2C_FIELD(arg1, s32 ***, 8));
            return;
        case 1:
            **M2C_FIELD(arg1, s32 ***, 8) = func_0200c160();
            return;
        case 2:
            func_0200c154();
            return;
    }
}
