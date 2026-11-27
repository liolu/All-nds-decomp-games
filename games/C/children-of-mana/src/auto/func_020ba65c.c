/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b969c(void *);                      /* extern */
M2C_UNK func_020bb2d4(void *);                      /* extern */

void func_020ba65c(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xC) != 0) {
        func_020bb2d4(arg0 + 0x248);
    }
    func_020b969c(arg0);
}
