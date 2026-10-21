/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020bbf38(void *);                      /* extern */

void func_020b9730(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_020bbf38(arg0 + 0xC);
    func_020bbf38(arg0 + 0x20);
    func_020bbf38(arg0 + 0x34);
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
}
