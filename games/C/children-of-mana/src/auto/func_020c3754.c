/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200ffe8(s16);                         /* extern */

void func_020c3754(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_0200ffe8(M2C_FIELD(arg0, s16 *, 0x0));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
