#include "m2c.h"

M2C_UNK func_020b1a08();                            /* extern */
extern u16 data_020f1894;

void func_020b24ec(s32 arg0) {
    data_020f1894 |= arg0;
    func_020b1a08(arg0);
}
