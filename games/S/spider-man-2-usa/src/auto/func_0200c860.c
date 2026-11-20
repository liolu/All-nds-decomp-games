/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0200bb30(M2C_UNK);
M2C_UNK func_0200c1cc(M2C_UNK);
void func_0201f6ec(M2C_UNK);

void func_0200c860(s32 arg0) {
    if (func_0200bb30(arg0 + 0x1C) == 0) {
        return;
    }
    if (func_0200c1cc(arg0 + 0x1C) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x18) == M2C_FIELD(arg0, s32 *, 0x14)) {
        return;
    }
    func_0201f6ec(arg0);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
}
