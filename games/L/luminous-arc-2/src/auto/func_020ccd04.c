#include "m2c.h"

M2C_UNK func_020074fc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void func_020ccd04(s32 arg0) {
    if (arg0 & 1) {
        func_020074fc(0, 0x06000000, 0x80000);
        func_020074fc(0, 0x06400000, 0x40000);
    }
    if (!(arg0 & 2)) {
        return;
    }
    func_020074fc(0, 0x06200000, 0x20000);
    func_020074fc(0, 0x06600000, 0x20000);
}
