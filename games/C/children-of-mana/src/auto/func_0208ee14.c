/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0208dcc4(void *);                      /* extern */

void func_0208ee14(void *arg0) {
    func_02001cc8(M2C_FIELD(arg0, s32 *, 0x1DC), 0, M2C_FIELD(arg0, s32 *, 0x20) * 0x10);
    func_0208dcc4(arg0);
}
