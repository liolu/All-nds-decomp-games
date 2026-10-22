/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02008738(M2C_UNK);

void func_02007258(s32 arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F4), u8 *, 0x86) == 0) {
        return;
    }
    func_02008738(arg0);
}
