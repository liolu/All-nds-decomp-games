/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02064624();                            /* extern */
M2C_UNK func_0206728c(s32);                         /* extern */

void func_02074954(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_02064624(arg0);
    }
    func_0206728c(M2C_FIELD(arg1, s32 *, 4));
}
