/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0200ffe8(M2C_UNK);

void func_02013658(s32 arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 4);
    if (temp_r0 != -1) {
        func_0200ffe8((s32) temp_r0);
        M2C_FIELD(arg0, s16 *, 4) = -1;
    }
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0xC)  = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 2;
}
