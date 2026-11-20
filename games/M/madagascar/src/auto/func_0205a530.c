/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0205ded0(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0205df00(M2C_UNK);

void func_0205a530(s32 arg0) {
    M2C_FIELD(arg0, s8 *, 0x2E)  = 0;
    M2C_FIELD(arg0, s8 *, 0x2D)  = 0;
    M2C_FIELD(arg0, s16 *, 0x34) = 0;
    M2C_FIELD(arg0, s16 *, 0x3E) = 0;
    M2C_FIELD(arg0, s8 *, 0x40)  = 0x7F;
    M2C_FIELD(arg0, s8 *, 0x41)  = 0x7F;
    func_0205df00(arg0 + 0x1C);
    func_0205ded0(arg0 + 0x1C, 0x7F00, 1);
}
