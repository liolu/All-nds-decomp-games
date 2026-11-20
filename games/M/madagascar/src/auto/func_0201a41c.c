/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201bf90(s32);                         /* extern */
M2C_UNK func_02032274();                            /* extern */

void func_0201a41c(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0xD0) = 1;
    func_0201bf90(M2C_FIELD(arg0, s32 *, 0x134));
    func_02032274();
}
