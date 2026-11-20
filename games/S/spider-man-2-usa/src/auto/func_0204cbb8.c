/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0204c940(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0204c9d8(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0204cbb8(s32 arg0) {
    func_0204c9d8(arg0, arg0 + 0x10, arg0 + 0x14);
    if (M2C_FIELD(arg0, u8 *, 0x28) == 0) {
        return;
    }
    func_0204c940(arg0, arg0 + 0x18, 0);
}
