/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020aecac(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_021008b8;
extern M2C_UNK data_02100c64;

void func_0208197c(void *arg0) {
    func_0200e8c8(&data_02100c64, &data_021008b8);
    func_020aecac(M2C_FIELD(arg0, s32 *, 0x300), 5);
    M2C_FIELD(arg0, s32 *, 0x2B4) = 0x1D;
}
