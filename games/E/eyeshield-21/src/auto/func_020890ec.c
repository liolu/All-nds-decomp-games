/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_02089130();                            /* extern */

s32 func_020890ec(void *arg0, void *arg1) {
    u16 temp_r2;

    temp_r2 = M2C_FIELD(arg1, u16 *, 2);
    switch (temp_r2) {                              /* irregular */
        case 1:
            M2C_FIELD(arg0, void **, 8) = (void *) (arg1 + 4);
            M2C_FIELD(arg0, s32 *, 0xC) = -1;
            break;
        case 0:
            func_02089130();
            M2C_FIELD(arg0, void **, 8) = NULL;
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
            break;
    }
    return 0;
}
