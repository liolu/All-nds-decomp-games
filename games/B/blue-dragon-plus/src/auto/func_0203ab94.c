#include "m2c.h"

M2C_UNK func_02038e80(M2C_UNK);                     /* extern */
s32 func_0203ac64();                                /* extern */
M2C_UNK func_0203b3a8(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0203b3f4(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK func_0203ab70;

void func_0203ab94(void) {
    func_0203b3a8(7, &func_0203ab70);
    if (func_0203ac64() == 0) {
        return;
    }
    if (func_0203b3f4(7, 1) != 0) {
        return;
    }
    do {
        func_02038e80(0x64);
    } while (func_0203b3f4(7, 1) == 0);
}
