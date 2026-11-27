/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02004204(s32, M2C_UNK *);                  /* extern */
s32 func_020c3038();                                /* extern */
extern M2C_UNK data_0210987c;
extern M2C_UNK data_02109880;

s32 func_020c3048(s32 arg0) {
    s32 temp_r4;

    temp_r4 = (arg0 * 0xA6) + func_020c3038();
    if (func_02004204(temp_r4, &data_0210987c) != 0) {
        return 1;
    }
    if (func_02004204(temp_r4 + 0x70, &data_02109880) != 0) {
        return 2;
    }
    return 0;
}
