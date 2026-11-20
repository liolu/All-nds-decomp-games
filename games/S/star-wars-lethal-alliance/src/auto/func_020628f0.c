#include "m2c.h"

M2C_UNK func_020631f8();                            /* extern */
extern u16 data_020e6284;

void func_020628f0(s32 arg0) {
    data_020e6284 |= arg0;
    func_020631f8(arg0);
}
