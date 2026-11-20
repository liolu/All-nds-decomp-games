/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205c204();                            /* extern */

void func_0205cd48(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        return;
    }
    func_0205c204();
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
}
