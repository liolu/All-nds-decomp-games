/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02003cc0(M2C_UNK);

void func_02003204(s32 arg0) {
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F0), s32 *, 0x28) <= -0x80) {
        return;
    }
    func_02003cc0(arg0);
}
