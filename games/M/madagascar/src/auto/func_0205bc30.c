/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020524c4();                /* extern */
s32 func_0205bbe0();                           /* extern */

s32 func_0205bc30(s32 *arg0, s32 arg1) {
    func_020524c4(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_0205bbe0(arg0) != 0) {
        return 1;
    }
    return 0;
}
