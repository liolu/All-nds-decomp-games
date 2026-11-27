/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202863c(void *, s32, s16, M2C_UNK);       /* extern */
M2C_UNK func_020400d4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0209304c(M2C_UNK);                     /* extern */

void func_020773f0(void *arg0) {
    func_0209304c(1);
    if (func_0202863c(arg0, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s16 *, 0x14), 0) != 0) {
        return;
    }
    func_020400d4(arg0, 0);
}
