/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201951c(void *);                      /* extern */
M2C_UNK func_02027e6c(void *, u16);                 /* extern */
M2C_UNK func_02027ec0(void *, u16);                 /* extern */
M2C_UNK func_02027f14(void *, u16);                 /* extern */
M2C_UNK func_02027f68();                            /* extern */

void func_02019188(void *arg0) {
    func_02027f68();
    func_02027f14(arg0, M2C_FIELD(arg0, u16 *, 0xDA));
    func_02027e6c(arg0, M2C_FIELD(arg0, u16 *, 0xDC));
    func_02027ec0(arg0, M2C_FIELD(arg0, u16 *, 0xD8));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) <= -0x80) {
        return;
    }
    func_0201951c(arg0);
}
