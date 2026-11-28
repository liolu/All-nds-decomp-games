#include "m2c.h"

void **func_02045afc(s32);                          /* extern */
s32 func_02045b04(s32);                             /* extern */
M2C_UNK func_02045b0c(s32);                         /* extern */

void func_02045a68(void *arg0, void *arg1) {
    void **temp_r0;

    func_02045b0c(arg0 + 0x14);
    if (func_02045b04(arg0 + 0x44) != 0) {
        temp_r0 = func_02045afc(arg0 + 0x44);
        M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, void *), 0x10)(temp_r0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) M2C_FIELD(arg1, s32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) M2C_FIELD(arg1, s32 *, 0x2C);
}
