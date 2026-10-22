/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02050844();                                /* extern */
M2C_UNK func_02050bf0(void **);                     /* extern */
M2C_UNK func_0205132c(void **, M2C_UNK, M2C_UNK);   /* extern */

void func_02050bbc(void **arg0) {
    M2C_FIELD(*arg0, s32 *, 4) = func_02050844();
    func_0205132c(arg0, 2, 1);
    func_02050bf0(arg0);
}
