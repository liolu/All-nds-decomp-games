/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020633d8(s32, M2C_UNK);                /* extern */
extern s32 data_0212329c;

s32 func_02073cf8(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & data_0212329c) {
        return 0;
    }
    func_020633d8(arg0, 0);
    data_0212329c |= arg0;
    return 1;
}
