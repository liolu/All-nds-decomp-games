#include "m2c.h"

M2C_UNK func_0200766c(s32, s32 *, M2C_UNK);         /* extern */
extern M2C_UNK data_02172940;

void func_020a2fe4(void) {
    s32 sp0;

    func_0200766c(M2C_FIELD(&data_02172940, s32 *, 0) + (M2C_FIELD(&data_02172940, s32 *, 4) - 4), &sp0, 4);
    M2C_FIELD(&data_02172940, s32 *, 4)    = (s32) (M2C_FIELD(&data_02172940, s32 *, 4) + sp0);
    M2C_FIELD(&data_02172940, s8 *, 0x16)  = 0;
    M2C_FIELD(&data_02172940, s32 *, 0x10) = 1;
}
