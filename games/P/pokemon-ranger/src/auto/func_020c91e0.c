/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c80e0(M2C_UNK);                     /* extern */
s32 func_020c910c();                                /* extern */
s32 func_020ca19c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020ca1c4(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK func_020c924c;

void func_020c91e0(void) {
    func_020ca1c4(7, &func_020c924c);
    if (func_020c910c() == 0) {
        return;
    }
    if (func_020ca19c(7, 1) != 0) {
        return;
    }
    do {
        func_020c80e0(0x64);
    } while (func_020ca19c(7, 1) == 0);
}
