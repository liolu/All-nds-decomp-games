/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02033cc8(void *, s32);                 /* extern */
M2C_UNK func_02033de4(void *);                      /* extern */

void func_020478c8(void *arg0) {
    func_02033cc8(arg0, M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), s32 *, 0x14) + 0xC);
    func_02033de4(arg0);
}
