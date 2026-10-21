#include "m2c.h"

M2C_UNK func_02002390(s32);                         /* extern */
M2C_UNK func_020028d4();                            /* extern */
M2C_UNK func_020074fc(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_02024c50(void) {
    func_02002390(0x1FF);
    func_020074fc(0, 0x06800000, 0xA4000);
    func_020028d4();
    func_020074fc(0, 0x05000000, 0x400);
    func_020074fc(0, 0x05000400, 0x400);
    func_020074fc(0xC0, 0x07000000, 0x400);
    func_020074fc(0xC0, 0x07000400, 0x400);
    func_020074fc(0, 0x06000000, 0x80000);
    func_020074fc(0, 0x06400000, 0x40000);
    func_020074fc(0, 0x06200000, 0x20000);
    func_020074fc(0, 0x06600000, 0x20000);
}
