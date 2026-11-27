/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201b74c();                                /* extern */
s32 func_0201c5e0(M2C_UNK);                         /* extern */
s32 func_0201d1d4(M2C_UNK);                         /* extern */
void *func_0201e150(M2C_UNK);                       /* extern */

s32 func_0201b86c(M2C_UNK arg0) {
    if (func_0201b74c() == 0) {
        return 0;
    }
    if (func_0201d1d4(arg0) == 0) {
        return 0;
    }
    if (func_0201c5e0(arg0) == 0) {
        return 0;
    }
    if (M2C_FIELD(func_0201e150(arg0), s32 *, 8) == 0) {
        return 1;
    }
    return 0;
}
