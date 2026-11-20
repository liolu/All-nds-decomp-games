/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02007940(M2C_UNK);

void func_02009a14(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) != 0x11) {
        return;
    }
    if (M2C_FIELD(arg1, s32 *, 4) != 1) {
        return;
    }
    func_02007940(arg0);
}
