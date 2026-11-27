/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010220();                            /* extern */

void func_020cbd64(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x10) == 0) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x10) = 0U;
    func_02010220();
}
