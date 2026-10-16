/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467f0();                            /* extern */
s32 func_020469d4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020469fc(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020b01d4;
extern M2C_UNK func_02044b2c;

void func_02044b70(void) {
    if (data_020b01d4 != 0) {
        return;
    }
    data_020b01d4 = 1;
    func_020467f0();
    do {

    } while (func_020469d4(0xC, 1) == 0);
    func_020469fc(0xC, &func_02044b2c);
}
