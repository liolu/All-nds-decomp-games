/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020449c4();                                /* extern */
M2C_UNK func_020449d8(s32);                         /* extern */
M2C_UNK func_0205bfb4(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020b4944;

void func_0205b26c(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_020449c4();
    func_0205bfb4(&data_020b4944, arg0);
    func_020449d8(temp_r4);
}
