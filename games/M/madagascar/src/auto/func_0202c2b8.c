/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202c310();                                /* extern */
M2C_UNK func_0202caf0(M2C_UNK);                     /* extern */
extern M2C_UNK data_020d02c0;
extern M2C_UNK data_020d02c4;

void func_0202c2b8(M2C_UNK arg0) {
    s32 temp_r3;

    temp_r3                                          = func_0202c310() * 0xC;
    *((M2C_UNK *) ((s8 *) &data_020d02c4 + temp_r3)) = *((M2C_UNK *) ((s8 *) &data_020d02c4 + temp_r3)) - 1;
    if (*((M2C_UNK *) ((s8 *) &data_020d02c4 + temp_r3)) != 0) {
        return;
    }
    *((M2C_UNK *) ((s8 *) &data_020d02c0 + temp_r3)) = 0;
    func_0202caf0(arg0);
}
