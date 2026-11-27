/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02036788(M2C_UNK);                         /* extern */
M2C_UNK func_0203679c(M2C_UNK, void *);             /* extern */
s32 func_02036cfc(M2C_UNK, s32, s32);               /* extern */

void func_0208ab44(void *arg0, M2C_UNK arg1) {
    if (func_02036cfc(arg1, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10)) == 0) {
        return;
    }
    if (func_02036788(arg1) != 0) {
        return;
    }
    func_0203679c(arg1, arg0);
}
