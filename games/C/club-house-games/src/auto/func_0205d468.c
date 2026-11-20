/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_02057ee8(M2C_UNK *, M2C_UNK); /* extern */
s32 func_0206094c();                                /* extern */
M2C_UNK func_02060960(s32);                         /* extern */
extern M2C_UNK data_02263ec4;

void func_0205d468(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0206094c();
    func_02057ee8(&data_02263ec4, arg0);
    func_02060960(temp_r4);
}
