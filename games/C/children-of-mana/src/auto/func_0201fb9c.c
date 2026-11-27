/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02010b2c(void *, void *);              /* extern */

void *func_0201fb9c(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    func_02010b2c(arg0 + 0x10, arg1 + 0x10);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    return arg0;
}
