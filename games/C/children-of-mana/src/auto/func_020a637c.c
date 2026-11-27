/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020992cc();                            /* extern */
M2C_UNK func_020a621c(void *);                      /* extern */

void func_020a637c(void *arg0) {
    func_020992cc();
    if (M2C_FIELD(arg0, u8 *, 0x97) == 0) {
        return;
    }
    func_020a621c(arg0);
}
