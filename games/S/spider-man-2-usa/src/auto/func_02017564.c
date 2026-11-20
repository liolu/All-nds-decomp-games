/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02017514(void *);                      /* extern */
s32 func_0203a6c0(s32);                             /* extern */

void *func_02017564(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = func_0203a6c0(arg1 * 4);
    func_02017514(arg0);
    return arg0;
}
