/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02061ed8();                            /* extern */
M2C_UNK func_02063d0c(s32);                         /* extern */

void func_020729f4(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_02061ed8(arg0);
    }
    func_02063d0c(M2C_FIELD(arg1, s32 *, 4));
}
