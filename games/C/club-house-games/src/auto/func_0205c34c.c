/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_0205c304();                           /* extern */
M2C_UNK func_02057f74();                /* extern */

s32 func_0205c34c(s32 *arg0, s32 arg1) {
    func_02057f74(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_0205c304(arg0) != 0) {
        return 1;
    }
    return 0;
}
