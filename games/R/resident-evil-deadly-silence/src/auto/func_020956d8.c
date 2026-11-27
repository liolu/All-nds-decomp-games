/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK _u32_div_f(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_0212035c;
extern M2C_UNK data_0213bb18;

void func_020956d8(s32 arg0) {
    if (((u32) (M2C_FIELD(&data_0213bb18, s32 *, 0x1FC) << 0x1E) >> 0x1F) == 1) {
        _u32_div_f((arg0 * ((s32 *) &data_0212035c)[(M2C_FIELD(&data_0213bb18, u8 *, 0x202) - 1)]) + 0x32, 0x64);
    }
}
