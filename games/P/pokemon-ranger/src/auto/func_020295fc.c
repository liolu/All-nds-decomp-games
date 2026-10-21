/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02029eb4();                            /* extern */

void func_020295fc(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    M2C_FIELD(arg0, s32 *, 4)    = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s16 *, 0x28) = 0;
    M2C_FIELD(arg0, s8 *, 0x2A)  = -1;
    M2C_FIELD(arg0, s8 *, 0x2B)  = -1;
    M2C_FIELD(arg0, s8 *, 0x2C)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2E)  = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    func_02029eb4();
}
