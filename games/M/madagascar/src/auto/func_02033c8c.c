/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02033cc0(void *, s32);                 /* extern */
s32 func_020374fc(s8);                              /* extern */

void func_02033c8c(void *arg0, s8 arg1) {
    func_02033cc0(arg0, func_020374fc(arg1));
    M2C_FIELD(arg0, s8 *, 0x1C1) = arg1;
}
