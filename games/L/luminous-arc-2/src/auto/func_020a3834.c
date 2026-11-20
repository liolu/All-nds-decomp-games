#include "m2c.h"

M2C_UNK func_0200766c(s32, s32 *, M2C_UNK);         /* extern */
s32 func_0205c27c(u8);                              /* extern */
M2C_UNK func_020a2fe4();                            /* extern */
M2C_UNK func_020a3034(s32);                         /* extern */
M2C_UNK func_020a3b54(M2C_UNK);                     /* extern */
extern u16 data_02152a24;
extern M2C_UNK data_02172940;

void func_020a3834(void) {
    s32 sp0;

    func_020a3b54(0);
    if (func_0205c27c((u8) data_02152a24) != 0) {
        func_0200766c(M2C_FIELD(&data_02172940, s32 *, 0) + (M2C_FIELD(&data_02172940, s32 *, 4) + 2), &sp0, 4);
        func_020a3034(sp0);
        return;
    }
    func_020a2fe4();
}
