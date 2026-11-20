/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffb96c(void *);                      /* extern */
s32 func_0200114c(u32);                             /* extern */
M2C_UNK func_0201ee8c(s32, void *);                 /* extern */

void func_02000f54(void *arg0) {
    u32 temp_r0;

    if (((u32) (M2C_FIELD(arg0, u8 *, 0x27C) << 0x1F) >> 0x1F) == 0) {
        temp_r0 = (u32) (M2C_FIELD(arg0, u8 *, 0x27D) << 0x19) >> 0x1F;
        if (temp_r0 != 0) {
            func_0201ee8c(func_0200114c(temp_r0), arg0);
        }
    }
    func_01ffb96c(arg0);
}
