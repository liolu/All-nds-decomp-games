/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204c5d4();                                /* extern */
M2C_UNK func_0204de08(M2C_UNK);                     /* extern */
M2C_UNK func_0204df70(M2C_UNK);                     /* extern */
s32 func_02095e78(s32);                             /* extern */

void func_0204e0a4(M2C_UNK arg0) {
    s32 temp_r4;

    if (func_0204c5d4() != 0) {
        return;
    }
    temp_r4 = func_02095e78(0);
    func_0204df70(arg0);
    func_0204de08(arg0);
    func_02095e78(temp_r4);
}
