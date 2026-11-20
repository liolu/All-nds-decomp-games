/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02067278();
M2C_UNK func_0206728c();
extern u32 data_020e6318;

u32 func_02065438(void) {
    M2C_UNK m2c_irq;
    M2C_UNK saved_reg_r4;
    u32 var_r4;

    var_r4  = saved_reg_r4;
    m2c_irq = func_02067278();
    if ((u32) data_020e6318 < -1U) {
        var_r4 = data_020e6318;
        data_020e6318 += 1;
    }
    func_0206728c(m2c_irq);
    return var_r4;
}
