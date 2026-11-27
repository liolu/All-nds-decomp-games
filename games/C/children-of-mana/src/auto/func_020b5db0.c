/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f21c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0204f55c(M2C_UNK *);                   /* extern */
M2C_UNK func_0204f56c(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020b5e00();                            /* extern */
extern M2C_UNK data_02107a14;
extern s32 data_02127ed0;
extern M2C_UNK data_02127ee8;

void func_020b5db0(void) {
    data_02127ed0 = func_0200f21c(0x1240, 0);
    func_0204f56c(&data_02127ee8, &data_02107a14, 0);
    func_020b5e00();
    func_0204f55c(&data_02127ee8);
}
