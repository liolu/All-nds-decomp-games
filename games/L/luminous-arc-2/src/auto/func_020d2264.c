#include "m2c.h"

s32 func_02011398(M2C_UNK *);                       /* extern */
M2C_UNK func_020d2104();                            /* extern */
extern M2C_UNK data_02185160;
extern s16 data_02186538;
extern s16 data_0218653a;
extern M2C_UNK func_020d22c8;

s32 func_020d2264(void) {
    if ((u32) (M2C_FIELD(&data_02185160, s32 *, 0x14) - 4) <= 2U) {
        return 1;
    }
    if (func_02011398(&func_020d22c8) != 2) {
        func_020d2104();
        return 0;
    }
    data_0218653a = 0;
    data_02186538 = 1;
    return 1;
}
