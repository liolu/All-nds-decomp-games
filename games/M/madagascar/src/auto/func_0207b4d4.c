/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0207b000();                         /* extern */
M2C_UNK func_0207b51c();        /* extern */

void func_0207b4d4(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    if (arg0 == NULL) {
        return;
    }
    if (arg3 != 0) {
        func_0207b51c(arg0, M2C_FIELD(arg0, s32 *, -4), arg1);
    }
    func_0207b000(arg0 - arg2);
}
