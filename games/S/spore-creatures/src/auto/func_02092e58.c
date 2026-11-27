#include "m2c.h"

M2C_UNK func_0208f46c(s32, u16);                    /* extern */
M2C_UNK func_0209c6fc(s32);                         /* extern */

void func_02092e58(s32 arg0) {
    func_0208f46c(arg0, (u16) (((*(u16 *) 0x04000130 | *(u16 *) 0x027FFFA8) ^ 0x2FFF) & 0x2FFF));
    func_0209c6fc(arg0 + 0xC);
    func_0209c6fc(arg0 + 0x4C);
}
