#include "m2c.h"

M2C_UNK func_02001584();                            /* extern */
extern u16 data_020d0b84;

void func_02001fbc(s32 arg0) {
    data_020d0b84 |= arg0;
    func_02001584(arg0);
}
