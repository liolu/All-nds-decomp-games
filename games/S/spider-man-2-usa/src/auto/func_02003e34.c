/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002b64(void *, M2C_UNK);             /* extern */
M2C_UNK func_02002c1c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_02003e34(void *arg0) {
    func_02002c1c(arg0, 5, 0, 0);
    func_02002b64(arg0, 5);
    M2C_FIELD(arg0, s32 *, 0x370) = 8;
}
