/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02076f18(s32);                             /* extern */
s32 func_02076f20(s32, u16);                        /* extern */
M2C_UNK func_0207a998(void *, M2C_UNK);             /* extern */

void func_0207a9dc(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x4C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x44) = func_02076f20(M2C_FIELD(arg0, s32 *, 0xC), (u16) M2C_FIELD(arg0, s32 *, 0x4C));
    M2C_FIELD(arg0, s32 *, 0x48) = func_02076f18(M2C_FIELD(arg0, s32 *, 0x44));
    func_0207a998(arg0, 0);
}
