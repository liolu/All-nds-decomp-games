/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cc8(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_0208f618(s16);                         /* extern */

void func_0208dc58(void *arg0) {
    func_02001cc8(M2C_FIELD(arg0, s32 *, 0x1C), 0, M2C_FIELD(arg0, s32 *, 0x20) * 0x14);
    func_0208f618(M2C_FIELD(arg0, s16 *, 0x3C));
    M2C_FIELD(arg0, s16 *, 0x3C) = -1;
    M2C_FIELD(arg0, s8 *, 0x1DA) = 0;
}
