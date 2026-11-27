#include "m2c.h"

s32 func_020c3558(void **);                         /* extern */
s16 func_ov000_02170cd0(s32, M2C_UNK);              /* extern */
extern s16 data_02100e16;

s16 *func_020c09dc(void *arg0) {
    s16 sp0;
    void **temp_r0;
    void *temp_r1;

    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    if ((temp_r0 == NULL) || (M2C_FIELD(*temp_r0, s32(**)(), 0x68)(temp_r0) == 0)) {
        temp_r1 = M2C_FIELD(arg0, void **, 4);
        if ((temp_r1 != NULL) && (M2C_FIELD(temp_r1, u16 *, 0x34) & 8)) {
            return temp_r1 + 0x26;
        }
        return &data_02100e16;
    }
    sp0 = func_ov000_02170cd0(func_020c3558(M2C_FIELD(arg0, void ***, 0xC)) + 0x78, 0);
    return &sp0;
}
