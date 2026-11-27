/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200fa5c(s16);                         /* extern */
s32 func_02013814();                                /* extern */
s32 func_0201381c();                                /* extern */

void func_020776f8(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0) = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 4) = 0;
    func_0200fa5c(M2C_FIELD(arg0, s16 *, 0x16));
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 8) = func_02013814();
    func_0200fa5c(M2C_FIELD(arg0, s16 *, 0x16));
    M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0xC) = func_0201381c();
}
