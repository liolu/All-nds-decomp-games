/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 _ZN10__cmd_wait5isEndEv(void *);                /* extern */
M2C_UNK func_0204f0ec();                            /* extern */

void func_020dedd0(void *arg0) {
    func_0204f0ec();
    if (_ZN10__cmd_wait5isEndEv(arg0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = 1;
    }
}
