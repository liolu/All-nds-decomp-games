/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c35f0(void *);                      /* extern */

void func_020c336c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x20) == -1) {
        return;
    }
    func_020c35f0(arg0 + 0x20);
}
