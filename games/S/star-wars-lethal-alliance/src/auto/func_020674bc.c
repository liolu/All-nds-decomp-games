/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020695d4();                            /* extern */
s32 func_020697b8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020697e0(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020e6664;
extern M2C_UNK func_02067478;

void func_020674bc(void) {
    if (data_020e6664 != 0) {
        return;
    }
    data_020e6664 = 1;
    func_020695d4();
    do {

    } while (func_020697b8(0xC, 1) == 0);
    func_020697e0(0xC, &func_02067478);
}
