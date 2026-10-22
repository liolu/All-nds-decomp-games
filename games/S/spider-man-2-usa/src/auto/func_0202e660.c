/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0202e6c4(M2C_UNK);

s32 func_0202e660(s32 arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0) == 0xC0DE602D) && (M2C_FIELD(arg0, u16 *, 0x90) == func_0202e6c4(arg0))) {
        return 1;
    }
    return 0;
}
