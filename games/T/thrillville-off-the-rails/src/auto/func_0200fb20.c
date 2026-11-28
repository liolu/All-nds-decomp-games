/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02021a10();                            /* extern */
M2C_UNK func_02024638(s32);                         /* extern */

void func_0200fb20(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_02021a10(arg0);
    }
    func_02024638(M2C_FIELD(arg1, s32 *, 4));
}
