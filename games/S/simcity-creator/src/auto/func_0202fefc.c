#include "m2c.h"

M2C_UNK func_020055c4(s32, s32);                    /* extern */
extern M2C_UNK data_020bf5a0;

void func_0202fefc(void *arg0) {
    M2C_UNK (*temp_r4)(s32, s32, s32);

    temp_r4 = *((M2C_UNK *) ((s8 *) &data_020bf5a0 + (M2C_FIELD(arg0, s32 *, 0) * 4)));
    func_020055c4(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
    temp_r4(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
}
