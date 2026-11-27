/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204b364();                            /* extern */
M2C_UNK func_020e0918();                            /* extern */

void func_020976dc(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_0204b364();
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return;
    }
    func_020e0918();
}
