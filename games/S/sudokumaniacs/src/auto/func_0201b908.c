#include "m2c.h"

M2C_UNK func_0201be9c(s32);                         /* extern */
M2C_UNK func_0201bcf8();                            /* extern */
M2C_UNK func_0201e95c(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_0201b908(void) {
    func_0201be9c(0x1FF);
    func_0201e95c(0, 0x06800000, 0xA4000);
    func_0201bcf8();
    func_0201e95c(0xC0, 0x07000000, 0x400);
    func_0201e95c(0, 0x05000000, 0x400);
    func_0201e95c(0xC0, 0x07000400, 0x400);
    func_0201e95c(0, 0x05000400, 0x400);
}
