#include "m2c.h"

M2C_UNK func_020cdb4c(u16);                         /* extern */
extern u16 data_021e15e0;

u16 func_020ce868(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_021e15e0 |= temp_r4;
    func_020cdb4c(temp_r4);
    return temp_r4;
}
