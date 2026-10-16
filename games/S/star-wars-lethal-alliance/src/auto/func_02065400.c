/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02067278();
M2C_UNK func_0206728c();
extern s32 data_020e6318;

s32 func_02065400(void) {
    M2C_UNK m2c_irq;
    s32 var_r4;

    m2c_irq = func_02067278();
    var_r4  = 0;
    if (data_020e6318 != 0) {
        var_r4 = data_020e6318;
        data_020e6318 -= 1;
    }
    func_0206728c(m2c_irq);
    return var_r4;
}
