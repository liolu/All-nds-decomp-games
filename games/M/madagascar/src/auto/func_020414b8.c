/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02032724(M2C_UNK);                         /* extern */
M2C_UNK func_0203f804(M2C_UNK);                     /* extern */
M2C_UNK func_02041400(M2C_UNK);                     /* extern */
s32 func_02041890();                                /* extern */

void func_020414b8(M2C_UNK arg0) {
    if ((func_02041890() != 0) && (func_02032724(arg0) != 0)) {
        func_02041400(arg0);
        return;
    }
    func_0203f804(arg0);
}
