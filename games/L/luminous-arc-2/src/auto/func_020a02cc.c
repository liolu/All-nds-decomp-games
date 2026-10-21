#include "m2c.h"

M2C_UNK func_02000b9c(s32);                         /* extern */
extern M2C_UNK data_02147904;

void func_020a02cc(s8 arg0) {
    void *temp_r0;

    func_02000b9c(0x2000C54);
    temp_r0 = M2C_FIELD(M2C_FIELD(&data_02147904, void **, 4), void **, 0xA4);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s8 *, 9) = arg0;
    }
}
