/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02065b80();                            /* extern */
s32 func_02065d64(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02065d8c(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020dbac0;
extern M2C_UNK func_02063d88;

void func_02063dcc(void) {
    if (data_020dbac0 != 0) {
        return;
    }
    data_020dbac0 = 1;
    func_02065b80();
    do {

    } while (func_02065d64(0xC, 1) == 0);
    func_02065d8c(0xC, &func_02063d88);
}
