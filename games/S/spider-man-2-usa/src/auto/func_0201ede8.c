/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0201ee18(M2C_UNK, M2C_UNK);
M2C_UNK func_0201ee3c(M2C_UNK);

void func_0201ede8(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0201ee3c(arg0);
    if (temp_r0 == -1) {
        return;
    }
    func_0201ee18(arg0, temp_r0);
}
