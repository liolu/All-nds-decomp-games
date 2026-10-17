/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0204a038(void *, s32, M2C_UNK);          /* extern */

void func_02049d40(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *temp_r0;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 4);
    if (arg1 != 1) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0xE;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x18) = arg1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK(**)(), 0)(arg0);
    }
    temp_r0                           = func_0204a038(arg0, arg1, 0x7C);
    M2C_FIELD(temp_r0, s32 *, 0)      = 0;
    M2C_FIELD(temp_r0, s32 *, 4)      = arg4;
    M2C_FIELD(temp_r0, s32 *, 8)      = arg3;
    M2C_FIELD(temp_r0, s32 *, 0xC)    = arg5;
    M2C_FIELD(temp_r0, s32 *, 0x20)   = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x28)   = 0;
    M2C_FIELD(temp_r0, void **, 0x2C) = (void *) M2C_FIELD(temp_r4, void **, 0x44);
    M2C_FIELD(temp_r4, void **, 0x44) = temp_r0;
}
