/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020576b4(u16);                         /* extern */
extern u16 data_0211af44;

u16 func_02056b34(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_0211af44 |= temp_r4;
    func_020576b4(temp_r4);
    return temp_r4;
}
