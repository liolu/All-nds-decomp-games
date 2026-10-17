/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02030a60(M2C_UNK);

void func_0202f980(s32 arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), u8 *, 4) == 0) {
        return;
    }
    func_02030a60(arg0);
}
