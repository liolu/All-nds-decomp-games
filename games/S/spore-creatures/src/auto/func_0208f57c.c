#include "m2c.h"

M2C_UNK func_0208f5d4(void *);                      /* extern */
s32 func_0208f88c();                                /* extern */
extern s32 (*data_020e0304)(s32, M2C_UNK, M2C_UNK);

void func_0208f57c(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = func_0208f88c();
    if (M2C_FIELD(arg0, u8 *, 8) != 0) {
        return;
    }
    if (temp_r0 == 0) {
        return;
    }
    temp_r0_2                    = data_020e0304(temp_r0, 0, 0);
    M2C_FIELD(arg0, s32 *, 0x10) = temp_r0_2;
    if (temp_r0_2 == 0) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 8) = 1U;
    func_0208f5d4(arg0);
}
