/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02024694(M2C_UNK);                     /* extern */
s32 func_02025b38();                                /* extern */
s32 func_02024ad4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02024afc(M2C_UNK, M2C_UNK *);          /* extern */
extern M2C_UNK func_02025c78;

void func_02025c0c(void) {
    func_02024afc(7, &func_02025c78);
    if (func_02025b38() == 0) {
        return;
    }
    if (func_02024ad4(7, 1) != 0) {
        return;
    }
    do {
        func_02024694(0x64);
    } while (func_02024ad4(7, 1) == 0);
}
