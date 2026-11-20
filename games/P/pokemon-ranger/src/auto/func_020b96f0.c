/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020b7f60(M2C_UNK);
void func_020bc018(M2C_UNK);

void func_020b96f0(s32 arg0) {
    func_020bc018(arg0 + 0xC);
    func_020bc018(arg0 + 0x20);
    func_020bc018(arg0 + 0x34);
    if (!(M2C_FIELD(arg0, s32 *, 0x4C) & 1)) {
        return;
    }
    func_020b7f60(arg0);
}
