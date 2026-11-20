#include "m2c.h"

M2C_UNK func_020aa020(s32);                         /* extern */
void *func_020ab6e8();                              /* extern */
M2C_UNK func_020bb8d0(s32);                         /* extern */

s32 func_020ac440(void) {
    void *temp_r0;

    temp_r0 = func_020ab6e8();
    if (M2C_FIELD(temp_r0, s32 *, 0xC) == 0) {
        return 3;
    }
    func_020bb8d0(M2C_FIELD(temp_r0, s32 *, 0));
    func_020aa020(M2C_FIELD(temp_r0, s32 *, 8));
    func_020aa020(M2C_FIELD(temp_r0, s32 *, 4));
    M2C_FIELD(temp_r0, s32 *, 0xC) = 0;
    return 0;
}
