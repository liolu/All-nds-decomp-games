/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_01ff9420(M2C_UNK);

void func_020054cc(s32 arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F4), u8 *, 0x86) == 0) {
        return;
    }
    func_01ff9420(arg0);
}
