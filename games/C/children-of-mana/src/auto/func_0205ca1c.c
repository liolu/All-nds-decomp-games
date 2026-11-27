/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205cbe0();                            /* extern */
s32 func_0205cdc4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0205cdec(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_0211b34c;
extern M2C_UNK func_0205c9d8;

void func_0205ca1c(void) {
    if (data_0211b34c != 0) {
        return;
    }
    data_0211b34c = 1;
    func_0205cbe0();
    do {

    } while (func_0205cdc4(0xC, 1) == 0);
    func_0205cdec(0xC, &func_0205c9d8);
}
