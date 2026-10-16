/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02045938(s32, M2C_UNK);                /* extern */
extern s32 data_020b3e44;

s32 func_02057778(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & data_020b3e44) {
        return 0;
    }
    func_02045938(arg0, 0);
    data_020b3e44 |= arg0;
    return 1;
}
