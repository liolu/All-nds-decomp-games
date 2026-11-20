#include "m2c.h"

M2C_UNK func_02031108(M2C_UNK);                     /* extern */
M2C_UNK func_020330a4(M2C_UNK, s32);                /* extern */
M2C_UNK func_0203328c(M2C_UNK);                     /* extern */
M2C_UNK func_02034288(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 *func_020ae4b8(M2C_UNK);                        /* extern */
extern M2C_UNK data_02161de0;

void func_020ae910(M2C_UNK arg0, M2C_UNK arg1) {
    func_020330a4(0xA, *func_020ae4b8(arg1));
    func_0203328c(arg0);
    func_02031108(3);
    func_02034288(&data_02161de0, 0x1000, 1);
}
