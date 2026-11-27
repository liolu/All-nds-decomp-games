/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e0f8();                            /* extern */
M2C_UNK func_0208de78();                            /* extern */

void func_0208ee40(void *arg0) {
    func_0208de78();
    if (M2C_FIELD(arg0, s32 *, 0x1DC) == 0) {
        return;
    }
    func_0200e0f8();
    M2C_FIELD(arg0, s32 *, 0x1DC) = 0;
}
