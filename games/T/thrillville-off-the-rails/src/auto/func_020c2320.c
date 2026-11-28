#include "m2c.h"

M2C_UNK func_02089ecc(void *);                      /* extern */
M2C_UNK func_020c30a8(void *, M2C_UNK);             /* extern */

void func_020c2320(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_02089ecc(arg0 + 0x14);
            break;
        case 1:
            func_02089ecc(arg0 + 0x38);
            break;
        case 2:
            func_02089ecc(arg0 + 0x5C);
            break;
    }
    func_020c30a8(arg0, 3);
}
