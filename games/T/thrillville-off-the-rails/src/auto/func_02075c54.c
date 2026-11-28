#include "m2c.h"

M2C_UNK func_0207642c(void *, s32);                 /* extern */

void func_02075c54(void **arg0) {
    void *temp_r0;

    temp_r0 = *arg0;
    func_0207642c(temp_r0 + (M2C_FIELD(temp_r0, u8 *, 1) | (M2C_FIELD(temp_r0, u8 *, 2) << 8) |
                             (M2C_FIELD(temp_r0, u8 *, 3) << 0x10) | (M2C_FIELD(temp_r0, u8 *, 4) << 0x18)),
                  M2C_FIELD(temp_r0, u8 *, 5) | (M2C_FIELD(temp_r0, u8 *, 6) << 8) | (M2C_FIELD(temp_r0, u8 *, 7) << 0x10) |
                      (M2C_FIELD(temp_r0, u8 *, 8) << 0x18));
    *arg0 += 9;
}
