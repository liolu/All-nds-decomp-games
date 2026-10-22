/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02057aa0(void);
void func_02057ab4(M2C_UNK);

extern s32 data_021640f8;

s32 func_0205f550(void) {
    s32 temp_r0;

    temp_r0 = func_02057aa0();
    if (data_021640f8 != 0) {
        func_02057ab4(temp_r0);
        return 0;
    }
    data_021640f8 = 1;
    func_02057ab4(temp_r0);
    return 1;
}
