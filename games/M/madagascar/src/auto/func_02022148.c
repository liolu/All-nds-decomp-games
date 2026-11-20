/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02010468();                                /* extern */
M2C_UNK func_02010560(M2C_UNK, s32);                /* extern */
M2C_UNK func_02022018(M2C_UNK);                     /* extern */

void func_02022148(M2C_UNK arg0, s32 arg1) {
    if (arg1 == func_02010468()) {
        return;
    }
    func_02010560(arg0, arg1);
    func_02022018(arg0);
}
