/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205bb24(M2C_UNK *);                   /* extern */
M2C_UNK func_02063e24();                            /* extern */
M2C_UNK func_02063fec();                            /* extern */
extern s32 data_0211c800;
extern M2C_UNK data_0211c804;

void func_020636cc(void) {
    if (data_0211c800 != 0) {
        return;
    }
    data_0211c800 = 1;
    func_0205bb24(&data_0211c804);
    func_02063e24();
    func_02063fec();
}
