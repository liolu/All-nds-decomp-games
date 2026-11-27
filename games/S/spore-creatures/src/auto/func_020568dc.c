#include "m2c.h"

M2C_UNK func_02043470(s32, void *);                 /* extern */
s32 func_02056994(void *, u16);                     /* extern */

void func_020568dc(void *arg0) {
    void *temp_r2;

    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        return;
    }
    if (func_02056994(arg0 + 0x18, M2C_FIELD(arg0, u16 *, 0x14)) == 0) {
        return;
    }
    temp_r2 = M2C_FIELD(arg0, void **, 0xC);
    func_02043470(M2C_FIELD(arg0, s32 *, 0x18), temp_r2 + M2C_FIELD((temp_r2 + M2C_FIELD(temp_r2, u16 *, 0xE)), s32 *, 0xC));
}
