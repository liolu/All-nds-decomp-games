#include "m2c.h"

M2C_UNK func_020018ac();                            /* extern */
extern u16 data_02147824;

void func_02002390(s32 arg0) {
    data_02147824 |= arg0;
    func_020018ac(arg0);
}
