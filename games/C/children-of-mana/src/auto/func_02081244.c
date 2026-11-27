/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020114e4();                                /* extern */
M2C_UNK func_02013e98(s32, s32);                    /* extern */
extern M2C_UNK data_02100380;

void *func_02081244(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02100380;
    temp_r4                        = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r4 != 0) {
        func_02013e98(func_020114e4(), temp_r4);
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    }
    return arg0;
}
