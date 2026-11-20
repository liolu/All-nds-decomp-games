/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020519e4();                            /* extern */
M2C_UNK func_02051af0();                            /* extern */
M2C_UNK func_02058338();                            /* extern */
s32 func_0205851c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02058544(M2C_UNK, M2C_UNK *);          /* extern */
extern s32 data_021610f0;
extern s32 data_021610f4;
extern M2C_UNK func_02051a54;
extern M2C_UNK func_02051ab4;

void func_02051cbc(void) {
    if (data_021610f0 != 0) {
        return;
    }
    data_021610f0 = 1;
    func_020519e4();
    func_02058338();
    do {

    } while (func_0205851c(0xD, 1) == 0);
    func_02058544(0xD, &func_02051ab4);
    func_02051af0();
    func_02058544(0xD, NULL);
    func_02058544(0xD, &func_02051a54);
    data_021610f4 = 0;
}
