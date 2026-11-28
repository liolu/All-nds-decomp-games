/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020248f0();                            /* extern */
s32 func_02024ad4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02024afc(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_020ec6c4;
extern M2C_UNK func_020246c8;

void func_0202470c(void) {
    if (data_020ec6c4 != 0) {
        return;
    }
    data_020ec6c4 = 1;
    func_020248f0();
    do {

    } while (func_02024ad4(0xC, 1) == 0);
    func_02024afc(0xC, &func_020246c8);
}
