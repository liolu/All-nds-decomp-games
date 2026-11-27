/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205c9b8(M2C_UNK);                     /* extern */
s32 func_0205cdc4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0205cdec(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_02063718();                                /* extern */
extern M2C_UNK func_02063858;

void func_020637ec(void) {
    func_0205cdec(7, &func_02063858);
    if (func_02063718() == 0) {
        return;
    }
    if (func_0205cdc4(7, 1) != 0) {
        return;
    }
    do {
        func_0205c9b8(0x64);
    } while (func_0205cdc4(7, 1) == 0);
}
