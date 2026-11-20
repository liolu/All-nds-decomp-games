/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02032724(M2C_UNK);                         /* extern */
M2C_UNK func_0203de10(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02040714(M2C_UNK);                     /* extern */

void func_02040298(M2C_UNK arg0) {
    func_0203de10(arg0, 0x17);
    if (func_02032724(arg0) == 0) {
        return;
    }
    func_02040714(arg0);
}
