/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020215d0(M2C_UNK);

void func_020240a4(s32 arg0, s32 arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) != 0xB) {
        return;
    }
    if (M2C_FIELD(arg1, s32 *, 4) != 0) {
        return;
    }
    func_020215d0(arg0);
}
