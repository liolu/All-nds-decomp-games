#include "m2c.h"

M2C_UNK func_0204be88();                            /* extern */
M2C_UNK func_0204bfdc();                            /* extern */
M2C_UNK func_0204c2dc();                            /* extern */
M2C_UNK func_0204da2c();                            /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020c89f0(M2C_UNK, M2C_UNK, M2C_UNK, u8); /* extern */
extern u8 data_02158048;
extern M2C_UNK data_02175a4c;

void func_0204a934(void) {
    func_0204be88();
    func_0204bfdc();
    func_0204c2dc();
    func_020c89f0(2, 0x7F0, 0xA, M2C_FIELD(&data_02175a4c, u8 *, 0x18B));
    func_0204da2c();
    func_0206c4b4(0, 0x15, 0x7F, 0x7F, 0, 0x100);
    data_02158048 += 1;
}
