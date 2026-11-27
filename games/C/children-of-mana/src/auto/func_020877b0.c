/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, u16);              /* extern */
M2C_UNK func_02012178(M2C_UNK, u16);                /* extern */
void *func_020aac90();                              /* extern */
extern M2C_UNK data_02101af0;

void func_020877b0(M2C_UNK arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(func_020aac90(), u16 *, 0x45E);
    func_0200e8c8(&data_02101af0, temp_r4);
    func_02012178(arg0, temp_r4);
}
