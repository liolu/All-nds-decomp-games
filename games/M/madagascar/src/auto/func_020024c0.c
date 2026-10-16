/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020024e8(M2C_UNK, M2C_UNK);
M2C_UNK func_02002550(M2C_UNK);

void func_020024c0(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02002550(arg0);
    if (temp_r0 == 0) {
        return;
    }
    func_020024e8(arg0, temp_r0);
}
