/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020797f0(M2C_UNK);
void func_0207a1e4(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02079894(s32 arg0, s32 arg1) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) == 0) {
        func_020797f0(arg0);
        return;
    }
    if (arg1 == 0) {
        func_020797f0(arg0);
        return;
    }
    func_0207a1e4(arg0 + 0xE8, 0, arg1);
    M2C_FIELD(arg0, s32 *, 0x110) = (s32) (M2C_FIELD(arg0, s32 *, 0x110) | 8);
    M2C_FIELD(arg0, s32 *, 0x150) = 0;
}
