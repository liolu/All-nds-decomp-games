#include "m2c.h"

M2C_UNK func_0208617c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020c25c4();                            /* extern */
M2C_UNK func_020c30a8(void *, u32);                 /* extern */

void func_020c349c(void *arg0, u32 arg1) {
    switch (arg1) {
        default:
            break;
        case 0:
        case 1:
        case 2:
            func_020c25c4();
            break;
        case 3:
            func_0208617c(arg0 + 0x10, 0, 0x338);
            M2C_FIELD(arg0, s32 *, 0x344) = 0;
            M2C_FIELD(arg0, s8 *, 0x340)  = 0x7F;
            M2C_FIELD(arg0, s8 *, 0x341)  = 0x60;
            break;
    }
    func_020c30a8(arg0, arg1);
}
