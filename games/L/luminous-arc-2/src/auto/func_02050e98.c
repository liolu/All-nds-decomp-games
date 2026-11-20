#include "m2c.h"

extern M2C_UNK data_02182a4c;
extern M2C_UNK data_0218327a;

s32 func_02050e98(void) {
    if (M2C_FIELD(&data_02182a4c, u8 *, 0x832) == 3) {
        return 0;
    }
    if (*((u8 *) ((s8 *) &data_0218327a + (M2C_FIELD(&data_02182a4c, u8 *, 0x832) + 1))) != 0) {
        return 1;
    }
    return 0;
}
