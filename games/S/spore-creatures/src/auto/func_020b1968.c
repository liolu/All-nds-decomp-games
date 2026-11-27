#include "m2c.h"

M2C_UNK func_020b7288(s32);                            /* extern */
M2C_UNK func_020b6bd0();                     /* extern */
M2C_UNK func_020b6be4();                     /* extern */
extern M2C_UNK data_020e0314;

s32 func_020b1968(s32 arg0) {
    M2C_UNK m2c_irq;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(&data_020e0314, s32 *, 4);
    if (temp_r4 != -1) {
        func_020b7288(temp_r4);
    }
    m2c_irq                             = func_020b6bd0();
    M2C_FIELD(&data_020e0314, s32 *, 4) = arg0;
    func_020b6be4(m2c_irq);
    return temp_r4;
}
