/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bc2a4(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_020c8070();                                /* extern */
M2C_UNK func_020c8084(s32);                         /* extern */
extern M2C_UNK data_020f5ab8;

void func_020c06e4(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_020c8070();
    func_020bc2a4(&data_020f5ab8, arg0);
    func_020c8084(temp_r4);
}
