/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020023e4(M2C_UNK);

void func_0200a86c(s32 arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x4C) == 0) {
        return;
    }
    func_020023e4(arg0);
}
