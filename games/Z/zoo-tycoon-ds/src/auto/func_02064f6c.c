/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02062ca0();                /* extern */
s32 func_02064f1c();                           /* extern */

s32 func_02064f6c(s32 *arg0, s32 arg1) {
    func_02062ca0(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_02064f1c(arg0) != 0) {
        return 1;
    }
    return 0;
}
