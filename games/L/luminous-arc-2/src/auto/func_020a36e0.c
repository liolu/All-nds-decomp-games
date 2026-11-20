#include "m2c.h"

M2C_UNK func_0200766c(s32, u16 *, M2C_UNK);         /* extern */
M2C_UNK func_0205d874(s8);                          /* extern */
M2C_UNK func_020a3034(u16);                         /* extern */
M2C_UNK func_020cc3fc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_02172940;

void func_020a36e0(void) {
    u16 sp0;

    func_020cc3fc(0x28, 1, 1);
    func_0205d874(M2C_FIELD(&data_02172940, s8 *, 0x1A));
    func_0205d874(M2C_FIELD(&data_02172940, s8 *, 0x1B));
    func_0200766c(M2C_FIELD(&data_02172940, s32 *, 0) +
                      (M2C_FIELD(&data_02172940, s32 *, 4) + (M2C_FIELD(&data_02172940, u8 *, 0x1C) * 4)),
                  &sp0, 4);
    func_020a3034(sp0);
}
