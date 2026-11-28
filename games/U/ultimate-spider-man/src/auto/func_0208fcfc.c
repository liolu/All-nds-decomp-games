/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0208fdcc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0208ff2c(void *);

s32 func_0208fcfc(s32 arg0, s32 arg1) {
    u8 sp0[68];

    func_0208ff2c(sp0);
    if (func_0208fdcc((s32) sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
