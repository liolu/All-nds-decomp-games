/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ff80d4();                                /* extern */
s32 func_01ff80fc(M2C_UNK);                         /* extern */
M2C_UNK func_02024c2c(M2C_UNK);                     /* extern */
M2C_UNK func_02024c84(M2C_UNK);                     /* extern */

void func_02024ce0(M2C_UNK arg0) {
    if (func_01ff80d4() != 0) {
        func_02024c84(arg0);
    }
    if (func_01ff80fc(arg0) == 0) {
        return;
    }
    func_02024c2c(arg0);
}
