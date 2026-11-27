#include "m2c.h"

M2C_UNK func_02064b00();                            /* extern */
M2C_UNK func_02093234(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_02064428(s32 arg0) {
    func_02064b00();
    func_02093234(arg0 + 0x68, 0, 2, 8);
    func_02093234(arg0 + 0x6A, 0, 8, 8);
    func_02093234(arg0 + 0x72, 0, 2, 8);
}
