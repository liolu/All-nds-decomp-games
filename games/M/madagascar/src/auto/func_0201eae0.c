/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020246e8(s32, s32, M2C_UNK);           /* extern */

void func_0201eae0(void *arg0, void *arg1) {
    s32 temp_r0;

    if (M2C_FIELD(arg1, s32 *, 0) != 9) {
        return;
    }
    temp_r0 = M2C_FIELD(arg1, s32 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 1:
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s8 *, 0x24) = 1;
            return;
        case 0:
            func_020246e8(M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x20), M2C_FIELD(arg1, s32 *, 8), 0);
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s8 *, 0x24) = 0;
            return;
    }
}
