/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02063cf8(void);
void func_02063d0c(M2C_UNK);

extern s32 data_020dd778;

s32 func_0206914c(void) {
    s32 temp_r0;

    temp_r0 = func_02063cf8();
    if (data_020dd778 != 0) {
        func_02063d0c(temp_r0);
        return 0;
    }
    data_020dd778 = 1;
    func_02063d0c(temp_r0);
    return 1;
}
