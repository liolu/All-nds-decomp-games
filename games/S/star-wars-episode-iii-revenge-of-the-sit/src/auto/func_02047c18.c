/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02047584(void *, s32);                     /* extern */
M2C_UNK func_02047728(void *, s32);                 /* extern */
M2C_UNK func_02047c60();                            /* extern */
s32 func_02047d00(s32);                             /* extern */

s32 func_02047c18(void *arg0) {
    func_02047728(arg0, func_02047584(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_02047d00(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_02047c60();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
