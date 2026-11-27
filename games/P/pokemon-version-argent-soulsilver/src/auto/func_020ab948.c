#include "m2c.h"

M2C_UNK func_02000b9c(s32);                         /* extern */
extern M2C_UNK data_021e16c0;

void func_020ab948(s8 arg0) {
    void *temp_r0;

    func_02000b9c(0x2000C3C);
    temp_r0 = M2C_FIELD(M2C_FIELD(&data_021e16c0, void **, 4), void **, 0xA4);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s8 *, 9) = arg0;
    }
}
