/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200cf68(s32, u8);                     /* extern */

void func_02037074(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10C) = arg1;
    func_0200cf68(M2C_FIELD(arg0, s32 *, 0x10C), M2C_FIELD(arg0, u8 *, 0x124));
}
