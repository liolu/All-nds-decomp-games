#include "m2c.h"

M2C_UNK func_02003a24(void *, void *, M2C_UNK);     /* extern */
void *func_02003cb0(s32);                           /* extern */

void func_020038b0(void *arg0, s32 arg1) {
    void *temp_r0;

    temp_r0                      = func_02003cb0(M2C_FIELD(arg0, s32 *, 0x10));
    M2C_FIELD(temp_r0, s32 *, 4) = arg1;
    func_02003a24(arg0, temp_r0, 0);
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) + 1);
}
