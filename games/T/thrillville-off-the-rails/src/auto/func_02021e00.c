/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02024624();
M2C_UNK func_02024638();
extern s32 data_020ec36c;

s32 func_02021e00(void) {
    M2C_UNK m2c_irq;
    s32 var_r4;

    m2c_irq = func_02024624();
    var_r4  = 0;
    if (data_020ec36c != 0) {
        var_r4 = data_020ec36c;
        data_020ec36c -= 1;
    }
    func_02024638(m2c_irq);
    return var_r4;
}
