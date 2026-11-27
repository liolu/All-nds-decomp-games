#include "m2c.h"

M2C_UNK func_0201cb70(void *, M2C_UNK);             /* extern */

void func_0201cb10(void *arg0, u32 arg1) {
    switch (arg1) {
        case 0:
        case 2:
        case 3:
        case 5:
        case 6:
        case 7:
            break;
        default:
            break;
        case 1:
            func_0201cb70(arg0, 1);
            M2C_FIELD(arg0, s8 *, 0x50) = 0;
            break;
        case 4:
        case 8:
            func_0201cb70(arg0, 4);
            break;
    }
    M2C_FIELD(arg0, u32 *, 4) = arg1;
}
