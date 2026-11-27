/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201006c(s16);                         /* extern */

void func_0208a100(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x25C) == 0) {
        return;
    }
    func_0201006c(M2C_FIELD(arg0, s16 *, 0));
    M2C_FIELD(arg0, s16 *, 0)    = -1;
    M2C_FIELD(arg0, s32 *, 4)    = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, u8 *, 0x25C) = 0U;
}
