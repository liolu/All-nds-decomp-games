#include "m2c.h"

s32 func_020c3558(void **);                         /* extern */
extern M2C_UNK data_ov000_021e8c30;

M2C_UNK *func_020c0824(void *arg0) {
    void **temp_r0;
    void *temp_r1;

    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    if ((temp_r0 == NULL) || (M2C_FIELD(*temp_r0, s32(**)(), 0x68)(temp_r0) == 0)) {
        temp_r1 = M2C_FIELD(arg0, void **, 4);
        if ((temp_r1 != NULL) && (M2C_FIELD(temp_r1, u16 *, 0x34) & 2)) {
            return temp_r1 + 0xC;
        }
        return &data_ov000_021e8c30;
    }
    return func_020c3558(M2C_FIELD(arg0, void ***, 0xC)) + 0x330;
}
