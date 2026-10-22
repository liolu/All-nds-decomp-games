/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002b64(void *, M2C_UNK);             /* extern */
M2C_UNK func_02002bc8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02002bf4(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_02002c1c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_020037e4(void *arg0) {
    func_02002c1c(arg0, 0xC, 0, 0);
    func_02002bf4(arg0, 0, 0);
    func_02002bc8(arg0, 0, 0);
    func_02002b64(arg0, 4);
    M2C_FIELD(arg0, s32 *, 0x370) = 0x19;
}
