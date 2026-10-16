/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02069704(M2C_UNK, s32, M2C_UNK);           /* extern */

s32 func_0206e708(s32 arg0) {
    if (func_02069704(5, (arg0 << 8) & 0x7F00, 0) >= 0) {
        return 1;
    }
    return 0;
}
