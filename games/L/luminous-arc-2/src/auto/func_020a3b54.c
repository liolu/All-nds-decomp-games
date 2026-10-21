#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0200766c(s32, s32 *, s32);             /* extern */
extern M2C_UNK data_02152a24;
extern M2C_UNK data_02172940;

void func_020a3b54(s32 arg0) {
    s32 sp0;

    func_0200766c(M2C_FIELD(&data_02172940, s32 *, 0) + (M2C_FIELD(&data_02172940, s32 *, 4) - 4), &sp0, 4);
    if ((u32) (sp0 + arg0) > 0x200U) {
        sp0 = 0x200 - arg0;
    }
    func_020075b0(&data_02152a24, 0, 0x200);
    func_0200766c(M2C_FIELD(&data_02172940, s32 *, 0) + M2C_FIELD(&data_02172940, s32 *, 4),
                  (M2C_UNK *) ((s8 *) &data_02152a24 + arg0), sp0);
}
