/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02073d4c(M2C_UNK, M2C_UNK);
void func_02073f18(M2C_UNK);
void func_02076e6c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02074100(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 0) {
        return;
    }
    if (arg1 == 0) {
        func_02073f18(arg0);
        return;
    }
    func_02076e6c(arg0 + 0x1C, 0, arg1);
    func_02073d4c(arg0, 0);
    M2C_FIELD(arg0, u8 *, 0x2C) = 2U;
}
