/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02064ac8(M2C_UNK);
void func_02064af8(M2C_UNK);

void func_020649e8(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_02064af8(arg0);
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_02064ac8(arg0);
}
