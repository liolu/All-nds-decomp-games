/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020bc62c(M2C_UNK);
void func_020bc65c(M2C_UNK);

void func_020bc54c(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_020bc65c(arg0);
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_020bc62c(arg0);
}
