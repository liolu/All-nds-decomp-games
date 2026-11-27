/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201c2ec(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0204754c(void *);                      /* extern */

void func_02094bb0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x74) == 0) {
        func_0201c2ec(arg0, M2C_FIELD(arg0, s32 *, 0x4A8), -1);
    }
    func_0204754c(arg0);
}
