/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0204a45c(M2C_UNK);
void func_0204a4fc(M2C_UNK);
void func_0204a79c(M2C_UNK);

void func_0204a3f0(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return;
    }
    func_0204a79c(arg0);
    func_0204a4fc(arg0);
    func_0204a45c(arg0);
    M2C_FIELD(arg0, s32 *, 4)     = 1;
    M2C_FIELD(arg0, s32 *, 0x14C) = 0;
    M2C_FIELD(arg0, s8 *, 0x150)  = (s8) arg1;
    M2C_FIELD(arg0, s8 *, 0x152)  = 0;
}
