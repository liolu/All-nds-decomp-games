/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02009c6c(M2C_UNK);

void func_020098a0(s32 arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), u8 *, 4) == 0) {
        return;
    }
    func_02009c6c(arg0);
}
