#include "m2c.h"

M2C_UNK func_020d2894(s32, s32);                    /* extern */
extern M2C_UNK data_02109234;

void func_020b61e8(void *arg0) {
    M2C_UNK (*temp_r4)(s32, s32, s32);

    temp_r4 = *((M2C_UNK *) ((s8 *) &data_02109234 + (M2C_FIELD(arg0, s32 *, 0) * 4)));
    func_020d2894(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC));
    temp_r4(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0xC));
}
