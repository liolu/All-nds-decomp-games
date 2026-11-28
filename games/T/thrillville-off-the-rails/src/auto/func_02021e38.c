/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02024624();
M2C_UNK func_02024638();
extern u32 data_020ec36c;

u32 func_02021e38(void) {
    M2C_UNK m2c_irq;
    M2C_UNK saved_reg_r4;
    u32 var_r4;

    var_r4  = saved_reg_r4;
    m2c_irq = func_02024624();
    if ((u32) data_020ec36c < -1U) {
        var_r4 = data_020ec36c;
        data_020ec36c += 1;
    }
    func_02024638(m2c_irq);
    return var_r4;
}
