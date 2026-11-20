/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02031184(M2C_UNK);

void func_02030e18(s32 arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), u8 *, 4) == 0) {
        return;
    }
    func_02031184(arg0);
}
