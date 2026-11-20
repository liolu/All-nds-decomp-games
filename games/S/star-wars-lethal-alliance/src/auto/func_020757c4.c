/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02075410(M2C_UNK, M2C_UNK);
void func_020755dc(M2C_UNK);
void func_0207a1e4(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020757c4(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 0) {
        return;
    }
    if (arg1 == 0) {
        func_020755dc(arg0);
        return;
    }
    func_0207a1e4(arg0 + 0x1C, 0, arg1);
    func_02075410(arg0, 0);
    M2C_FIELD(arg0, u8 *, 0x2C) = 2U;
}
