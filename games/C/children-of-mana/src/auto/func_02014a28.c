/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02076964(void *, s32);                 /* extern */

void func_02014a28(void *arg0) {
    func_02076964(arg0 + 0x88, M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, s8 *, 0x30) = 1;
}
