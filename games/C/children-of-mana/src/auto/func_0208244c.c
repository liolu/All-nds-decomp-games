/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *, s8);    /* extern */
s8 func_020121b4(void *, M2C_UNK);                  /* extern */
void *func_020aac90();                              /* extern */
M2C_UNK func_020ac8c4(s32, s8);                     /* extern */
extern M2C_UNK data_02100544;
extern M2C_UNK data_02100e08;

void func_0208244c(void *arg0) {
    s8 temp_r0;

    temp_r0 = func_020121b4(arg0, 0);
    func_0200e8c8(&data_02100e08, &data_02100544, temp_r0);
    func_020ac8c4(M2C_FIELD(arg0, s32 *, 0x300), temp_r0);
    M2C_FIELD(func_020aac90(), s8 *, 0x460) = temp_r0;
}
