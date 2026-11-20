/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205bcdc();                /* extern */
s32 func_0205d464();                           /* extern */

s32 func_0205d4b4(s32 *arg0, s32 arg1) {
    func_0205bcdc(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_0205d464(arg0) != 0) {
        return 1;
    }
    return 0;
}
