/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02067278(void);
void func_0206728c(M2C_UNK);

extern s32 data_020e66a4;
extern s32 data_020e66a8;
extern s32 data_020e66c0;

s32 func_0206898c(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_02067278();
    if (data_020e66a8 == 0) {
        var_r4 = data_020e66a4;
    } else {
        var_r4 = data_020e66c0;
    }
    func_0206728c(temp_r0);
    return var_r4;
}
