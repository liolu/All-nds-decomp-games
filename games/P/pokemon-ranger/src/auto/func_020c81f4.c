/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c9fb8();                            /* extern */
s32 func_020ca19c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020ca1c4(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020f6ccc;
extern M2C_UNK func_020c81b0;

void func_020c81f4(void) {
    if (data_020f6ccc != 0) {
        return;
    }
    data_020f6ccc = 1;
    func_020c9fb8();
    do {

    } while (func_020ca19c(0xC, 1) == 0);
    func_020ca1c4(0xC, &func_020c81b0);
}
