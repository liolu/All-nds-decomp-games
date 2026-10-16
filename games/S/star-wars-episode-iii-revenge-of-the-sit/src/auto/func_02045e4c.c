/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020449c4(void);
void func_020449d8(M2C_UNK);

extern s32 data_020b01f8;
extern s32 data_020b01fc;
extern s32 data_020b0214;

s32 func_02045e4c(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020449c4();
    if (data_020b01fc == 0) {
        var_r4 = data_020b01f8;
    } else {
        var_r4 = data_020b0214;
    }
    func_020449d8(temp_r0);
    return var_r4;
}
