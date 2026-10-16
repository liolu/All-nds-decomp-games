/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02067278();                                /* extern */
M2C_UNK func_0206728c(s32);                         /* extern */
M2C_UNK func_0207a3b0(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020eb2f0;

void func_02079544(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02067278();
    func_0207a3b0(&data_020eb2f0, arg0);
    func_0206728c(temp_r4);
}
