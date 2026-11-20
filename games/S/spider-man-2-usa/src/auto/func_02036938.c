/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02015780();                            /* extern */

void func_02036938(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        return;
    }
    func_02015780(arg0, arg1);
}
