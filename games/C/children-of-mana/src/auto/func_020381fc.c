/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK _ZN10__cmd_wait5isEndEv(M2C_UNK);
M2C_UNK func_02038174(M2C_UNK);
M2C_UNK func_020382b8(M2C_UNK, M2C_UNK);

s32 func_020381fc(s32 arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x760) != 0) {
        return 0;
    }
    if ((func_02038174(arg0) != 0) &&
        ((s32) M2C_FIELD(arg0, s32 *, 0xB4) >=
         func_020382b8(arg0, (s32) ((u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x644), u8 *, 1) << 0x1C) >> 0x1C)))) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x550);
        if ((temp_r0 != 0) && (_ZN10__cmd_wait5isEndEv(temp_r0) == 1)) {
            return 1;
        }
    }
    return 0;
}
