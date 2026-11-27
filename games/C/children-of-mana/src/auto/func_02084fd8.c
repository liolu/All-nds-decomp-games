/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s32 func_020121b4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020ca568();                            /* extern */
M2C_UNK func_020ca8fc(s32);                         /* extern */
extern M2C_UNK data_02100508;
extern M2C_UNK data_02101434;

void func_02084fd8(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020121b4(arg0, 0);
    func_0200e8c8(&data_02101434, &data_02100508, temp_r0);
    func_020ca8fc(temp_r0);
    func_020ca568();
}
