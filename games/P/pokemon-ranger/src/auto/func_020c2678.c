/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c33f0(u16);                         /* extern */
extern u16 data_020f68d0;

u16 func_020c2678(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_020f68d0 |= temp_r4;
    func_020c33f0(temp_r4);
    return temp_r4;
}
