/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_ov014_02141e20(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, volatile s32 *, 0xC208) = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0xC20C) = arg2;
    M2C_FIELD(arg0, volatile s32 *, 0xC210) =
        (s32) (M2C_FIELD(arg0, volatile s32 *, 0xC208) * M2C_FIELD(arg0, volatile s32 *, 0xC20C));
}
