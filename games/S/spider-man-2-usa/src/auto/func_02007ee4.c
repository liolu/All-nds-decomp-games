/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0200789c(M2C_UNK);
void func_02007eac(M2C_UNK);
M2C_UNK func_02008c50(M2C_UNK);

void func_02007ee4(s32 arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F4), u8 *, 0x86) == 0) {
        return;
    }
    if (func_02008c50(arg0) == 0) {
        func_0200789c(arg0);
        return;
    }
    func_02007eac(arg0);
}
