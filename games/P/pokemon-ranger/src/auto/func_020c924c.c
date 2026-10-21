/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c8070();                                /* extern */
M2C_UNK func_020c8084(s32);                         /* extern */
M2C_UNK func_020c9930(M2C_UNK);                     /* extern */

void func_020c924c(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_020c8070();
    func_020c9930(arg1);
    func_020c8084(temp_r4);
}
