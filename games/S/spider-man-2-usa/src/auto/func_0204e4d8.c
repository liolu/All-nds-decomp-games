/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_01ff9420(M2C_UNK);
void func_02044f1c(M2C_UNK);

void func_0204e4d8(s32 arg0) {
    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x2F4), void **, 0x20), u8 *, 4) != 0) {
        func_01ff9420(arg0);
    }
    func_02044f1c(arg0);
}
