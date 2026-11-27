/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0203fde8(M2C_UNK);
void func_0209304c(M2C_UNK);

void func_020417a8(s32 arg0) {
    func_0209304c(0);
    func_0203fde8(arg0 + 0x160);
    M2C_FIELD(arg0, s32 *, 0x1A0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1A0) & ~0x10);
}
