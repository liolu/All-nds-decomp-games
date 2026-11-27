/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d5bf4(void *, M2C_UNK);             /* extern */

void func_020d5fcc(void *arg0, s8 arg1, s8 arg2) {
    func_020d5bf4(arg0, 0x10);
    M2C_FIELD(arg0, s8 *, 0x58) = arg2;
    M2C_FIELD(arg0, s8 *, 0x68) = arg1;
}
