#include "m2c.h"

M2C_UNK func_02060c80(u16);                         /* extern */
extern u16 data_0208e52c;

u16 func_020614dc(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_0208e52c |= temp_r4;
    func_02060c80(temp_r4);
    return temp_r4;
}
