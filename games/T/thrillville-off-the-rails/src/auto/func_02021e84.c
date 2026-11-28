/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02024624();
M2C_UNK func_02024638();
extern M2C_UNK data_020ec380;

s32 func_02021e84(s32 arg0) {
    M2C_UNK m2c_irq;
    s32 temp_r4;

    m2c_irq                               = func_02024624();
    temp_r4                               = M2C_FIELD(&data_020ec380, s32 *, 0xC);
    M2C_FIELD(&data_020ec380, s32 *, 0xC) = arg0;
    func_02024638(m2c_irq);
    return temp_r4;
}
