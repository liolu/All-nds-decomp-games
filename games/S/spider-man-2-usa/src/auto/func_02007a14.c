/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0200789c(M2C_UNK);

void func_02007a14(s32 arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F4), u8 *, 0x86) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x380) == 0xB) {
        return;
    }
    func_0200789c(arg0);
}
