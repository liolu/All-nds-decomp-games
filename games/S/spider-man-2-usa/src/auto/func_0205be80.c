/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0205bf60(M2C_UNK);
void func_0205bf90(M2C_UNK);

void func_0205be80(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_0205bf90(arg0);
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_0205bf60(arg0);
}
