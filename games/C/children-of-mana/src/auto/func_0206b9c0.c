/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206ba48(s32);                         /* extern */
extern M2C_UNK data_021202cc;
extern M2C_UNK data_0212042c;

M2C_UNK *func_0206b9c0(void) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(&data_021202cc, s32 *, 0xFC) & 0x80;
    if (temp_r0 == 0) {
        func_0206ba48(temp_r0);
        M2C_FIELD(&data_021202cc, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_021202cc, s32 *, 0xFC) | 0x80);
    }
    return &data_0212042c;
}
