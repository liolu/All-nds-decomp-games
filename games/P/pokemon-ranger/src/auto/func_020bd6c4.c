/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020bd58c(M2C_UNK);

void func_020bd6c4(s32 arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_020bd58c(arg0);
}
