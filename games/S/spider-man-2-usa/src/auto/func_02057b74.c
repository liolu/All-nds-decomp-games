/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02058338();                            /* extern */
s32 func_0205851c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02058544(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_021615c4;
extern M2C_UNK func_02057b30;

void func_02057b74(void) {
    if (data_021615c4 != 0) {
        return;
    }
    data_021615c4 = 1;
    func_02058338();
    do {

    } while (func_0205851c(0xC, 1) == 0);
    func_02058544(0xC, &func_02057b30);
}
