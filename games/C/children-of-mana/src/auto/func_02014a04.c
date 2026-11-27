/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02074680(void *, s32);                 /* extern */

void func_02014a04(void *arg0) {
    func_02074680(arg0 + 0x88, M2C_FIELD(arg0, s32 *, 0x28));
    M2C_FIELD(arg0, s8 *, 0x30) = 0;
}
