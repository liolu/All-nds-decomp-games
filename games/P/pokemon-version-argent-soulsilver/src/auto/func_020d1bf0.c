#include "m2c.h"

M2C_UNK func_020d1c4c(s32);                         /* extern */
M2C_UNK func_020d226c(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_020d2324(void *);                      /* extern */
extern M2C_UNK data_021e169c;

void func_020d1bf0(void *arg0, s32 arg1) {
    if (M2C_FIELD(&data_021e169c, s32 *, 0x1C) != 0) {
        func_020d226c(arg0, func_020d1c4c);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_020d2324(arg0);
        return;
    }
    func_020d1c4c(arg1);
}
