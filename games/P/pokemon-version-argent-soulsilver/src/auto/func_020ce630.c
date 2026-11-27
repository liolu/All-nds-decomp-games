#include "m2c.h"

M2C_UNK func_020cdb4c();                            /* extern */
extern u16 data_021e15e0;

void func_020ce630(s32 arg0) {
    data_021e15e0 |= arg0;
    func_020cdb4c(arg0);
}
