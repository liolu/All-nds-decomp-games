/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ff8024(M2C_UNK);                         /* extern */
s32 func_01ff8084(M2C_UNK);                         /* extern */
s32 func_01ff80ac();                                /* extern */
M2C_UNK func_02008738(M2C_UNK);                     /* extern */
M2C_UNK func_020097d4(M2C_UNK, M2C_UNK);            /* extern */

void func_02006f00(M2C_UNK arg0) {
    if ((func_01ff80ac() == 0) && (func_01ff8084(arg0) == 0) && (func_01ff8024(arg0) == 0)) {
        func_02008738(arg0);
    }
    func_020097d4(arg0, 1);
}
