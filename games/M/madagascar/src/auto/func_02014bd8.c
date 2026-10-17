/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02014d1c(M2C_UNK);
M2C_UNK func_02032724(M2C_UNK);

void func_02014bd8(s32 arg0) {
    if ((M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C4), u8 *, 4) == 0) && (func_02032724(arg0) == 0)) {
        return;
    }
    func_02014d1c(arg0);
}
