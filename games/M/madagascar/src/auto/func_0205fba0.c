#include "m2c.h"

M2C_UNK func_020604a8();                            /* extern */
extern u16 data_020db6f4;

void func_0205fba0(s32 arg0) {
    data_020db6f4 |= arg0;
    func_020604a8(arg0);
}
