/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02065b80();                            /* extern */
M2C_UNK func_02065d8c(M2C_UNK, M2C_UNK *);          /* extern */
extern s32 data_020de1a4;
extern M2C_UNK func_0206ad40;

void func_0206adac(void) {
    func_02065b80();
    func_02065d8c(0xE, &func_0206ad40);
    data_020de1a4 = 0;
}
