/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0203a6c0(s32);                             /* extern */
M2C_UNK func_0204c664(s32, s32, s32);               /* extern */

s32 func_0204c50c(s32 arg0, s32 arg1) {
    func_0204c664(arg0, arg1, func_0203a6c0(arg1 * 6));
    return arg0;
}
