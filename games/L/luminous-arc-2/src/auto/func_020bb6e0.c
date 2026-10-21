#include "engine.h"
#include "m2c.h"

M2C_UNK func_020bd6e0(M2C_UNK);

s32 func_020bb6e0(s32 arg0, s32 arg1) {
    if (((u32) (arg1 - M2C_FIELD(arg0, s32 *, 0x88)) > 0x7530U) && (func_020bd6e0(arg0) == 0)) {
        return 0;
    }
    return 1;
}
