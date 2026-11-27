/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *, s8);    /* extern */
s8 func_020121b4(M2C_UNK, M2C_UNK);                 /* extern */
void *func_020aac90();                              /* extern */
extern M2C_UNK data_021005e8;
extern M2C_UNK data_02100e5c;

void func_02082648(M2C_UNK arg0) {
    s8 temp_r0;

    temp_r0 = func_020121b4(arg0, 0);
    func_0200e8c8(&data_02100e5c, &data_021005e8, temp_r0);
    M2C_FIELD(func_020aac90(), s8 *, 0x1D8) = temp_r0;
}
