/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02067278();
M2C_UNK func_0206728c();
extern M2C_UNK data_020e632c;

s32 func_02065484(s32 arg0) {
    M2C_UNK m2c_irq;
    s32 temp_r4;

    m2c_irq                               = func_02067278();
    temp_r4                               = M2C_FIELD(&data_020e632c, s32 *, 0xC);
    M2C_FIELD(&data_020e632c, s32 *, 0xC) = arg0;
    func_0206728c(m2c_irq);
    return temp_r4;
}
