/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(void *);                      /* extern */
s32 func_020114e4();                                /* extern */
M2C_UNK func_02013e98(s32, s32);                    /* extern */
extern M2C_UNK data_02102aec;

void *func_02092268(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02102aec;
    temp_r4                        = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r4 != 0) {
        func_02013e98(func_020114e4(), temp_r4);
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    func_0200f2c4(arg0);
    return arg0;
}
