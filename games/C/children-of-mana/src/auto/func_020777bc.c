/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200fa5c(s16);                         /* extern */
s32 func_02013814();                                /* extern */
s32 func_0201381c();                                /* extern */

void func_020777bc(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 2)   = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 0)   = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4)   = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8)   = 0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0xC) = 0;
    func_0200fa5c(M2C_FIELD(arg0, s16 *, 0x14));
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x10) = func_02013814();
    func_0200fa5c(M2C_FIELD(arg0, s16 *, 0x14));
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x14) = func_0201381c();
}
