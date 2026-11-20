#include "m2c.h"

M2C_UNK func_02029a90();                            /* extern */
extern M2C_UNK data_027e0000;

void func_02029a6c(void) {
    M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&data_027e0000, s32 *, 0x3FF8) | 0x40);
    func_02029a90();
}
