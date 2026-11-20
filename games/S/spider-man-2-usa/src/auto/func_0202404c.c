/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02014b1c(M2C_UNK *);                       /* extern */
M2C_UNK func_02014ba4(M2C_UNK *, M2C_UNK, s32);     /* extern */
M2C_UNK func_02024094(M2C_UNK, s32);                /* extern */
extern M2C_UNK data_0215b3d4;

void func_0202404c(M2C_UNK arg0) {
    func_02014ba4(&data_0215b3d4, 0, func_02014b1c(&data_0215b3d4));
    func_02024094(arg0, func_02014b1c(&data_0215b3d4));
}
