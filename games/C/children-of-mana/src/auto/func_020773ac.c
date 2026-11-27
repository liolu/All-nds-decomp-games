/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02029688(void *, s32, s16, M2C_UNK);       /* extern */
M2C_UNK func_02040040(void *, M2C_UNK);             /* extern */
M2C_UNK func_0209304c(M2C_UNK);                     /* extern */

void func_020773ac(void *arg0) {
    func_0209304c(1);
    if (func_02029688(arg0, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s16 *, 0x16), 0) != 0) {
        return;
    }
    func_02040040(arg0, 0);
}
