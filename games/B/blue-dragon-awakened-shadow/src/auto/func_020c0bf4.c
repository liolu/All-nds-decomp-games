#include "m2c.h"

s32 func_020c3558(void **);                         /* extern */
u8 func_ov000_02170c74(s32, M2C_UNK);               /* extern */

u8 func_020c0bf4(void *arg0) {
    void **temp_r0;
    void *temp_r1;

    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    if ((temp_r0 == NULL) || (M2C_FIELD(*temp_r0, s32(**)(), 0x68)(temp_r0) == 0)) {
        temp_r1 = M2C_FIELD(arg0, void **, 4);
        if ((temp_r1 != NULL) && (M2C_FIELD(temp_r1, u16 *, 0x34) & 0x80)) {
            return M2C_FIELD(temp_r1, u8 *, 0x2C);
        }
        return 0U;
    }
    return func_ov000_02170c74(func_020c3558(M2C_FIELD(arg0, void ***, 0xC)) + 0x78, 0);
}
