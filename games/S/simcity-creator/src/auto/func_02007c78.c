#include "m2c.h"

M2C_UNK func_02006750(M2C_UNK);                     /* extern */
s32 func_02007d48();                                /* extern */
M2C_UNK func_0200848c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020084d8(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_02007c54;

void func_02007c78(void) {
    func_0200848c(7, &func_02007c54);
    if (func_02007d48() == 0) {
        return;
    }
    if (func_020084d8(7, 1) != 0) {
        return;
    }
    do {
        func_02006750(0x64);
    } while (func_020084d8(7, 1) == 0);
}
