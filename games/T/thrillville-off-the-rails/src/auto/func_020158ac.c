#include "m2c.h"

M2C_UNK func_020162f4();                            /* extern */
extern u16 data_020ec0a0;

void func_020158ac(s32 arg0) {
    data_020ec0a0 |= arg0;
    func_020162f4(arg0);
}
