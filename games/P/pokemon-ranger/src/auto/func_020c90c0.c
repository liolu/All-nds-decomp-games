/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c6f30(M2C_UNK *);                   /* extern */
M2C_UNK func_020c9818();                            /* extern */
M2C_UNK func_020c99e0();                            /* extern */
extern s32 data_020f6cec;
extern M2C_UNK data_020f6cf0;

void func_020c90c0(void) {
    if (data_020f6cec != 0) {
        return;
    }
    data_020f6cec = 1;
    func_020c6f30(&data_020f6cf0);
    func_020c9818();
    func_020c99e0();
}
