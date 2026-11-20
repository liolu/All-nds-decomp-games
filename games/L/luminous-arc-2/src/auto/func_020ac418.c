#include "m2c.h"

void *func_020ab6e8();                              /* extern */
M2C_UNK func_020bb8e8(s32);                         /* extern */

s32 func_020ac418(void) {
    void *temp_r0;

    temp_r0 = func_020ab6e8();
    if (M2C_FIELD(temp_r0, s32 *, 0xC) == 0) {
        return 3;
    }
    func_020bb8e8(M2C_FIELD(temp_r0, s32 *, 0));
    return 0;
}
