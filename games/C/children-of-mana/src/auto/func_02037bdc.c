/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02011ef8(s32, M2C_UNK);                    /* extern */
s32 func_0201b728(M2C_UNK);                         /* extern */
s32 func_0201b74c();                                /* extern */
s32 func_0201c4bc(M2C_UNK);                         /* extern */
s32 func_0201e19c(M2C_UNK);                         /* extern */
s32 func_02038408(M2C_UNK);                         /* extern */

s32 func_02037bdc(M2C_UNK arg0) {
    if (func_0201b74c() == 0) {
        return 0;
    }
    if (func_0201b728(arg0) == 0) {
        return 0;
    }
    if (func_02038408(arg0) == 0) {
        return 0;
    }
    if (func_0201c4bc(arg0) == 0) {
        return 0;
    }
    if (func_0201e19c(arg0) == 0) {
        return 0;
    }
    return func_02011ef8(func_0201c4bc(arg0), 0x12);
}
