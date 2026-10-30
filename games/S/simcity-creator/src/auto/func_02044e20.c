#include "m2c.h"

M2C_UNK func_02044450(void *);                      /* extern */
M2C_UNK func_02044e78(s32, void *);                 /* extern */
extern M2C_UNK data_020dd620;

void func_02044e20(void *arg0) {
    if (M2C_FIELD(&data_020dd620, s32 *, 0xC) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 0x3C) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x4A) != 0x18) {
        return;
    }
    func_02044e78(M2C_FIELD(&data_020dd620, s32 *, 8), arg0);
    M2C_FIELD(&data_020dd620, s32 *, 0xC) = 1;
    func_02044450(arg0);
}
