#include "engine.h"
#include "m2c.h"

M2C_UNK func_0204e5e8(M2C_UNK, M2C_UNK);

s32 func_0206be9c(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0) {
        return -1;
    }
    return (s32) (M2C_FIELD((((u16) arg2 * 6) +
                             M2C_FIELD((void *) func_0204e5e8(M2C_FIELD(arg0, s32 *, 0x20), (s32) (u16) arg1), s32 *, 4)),
                            u16 *, 4) &
                  0xF000) >>
           0xC;
}
