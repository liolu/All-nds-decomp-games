/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ff8024(M2C_UNK);                         /* extern */
s32 func_01ff8084(M2C_UNK);                         /* extern */
s32 func_01ff80ac();                                /* extern */
M2C_UNK func_020076f8(M2C_UNK);                     /* extern */

void func_020077bc(M2C_UNK arg0) {
    if ((func_01ff80ac() == 0) && (func_01ff8084(arg0) == 0) && (func_01ff8024(arg0) == 0)) {
        return;
    }
    func_020076f8(arg0);
}
