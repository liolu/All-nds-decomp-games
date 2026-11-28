#include "m2c.h"

void **func_02045afc(s32);                          /* extern */
s32 func_02045b04(s32);                             /* extern */
M2C_UNK func_02045b0c(s32);                         /* extern */

void func_02045cd4(s32 arg0, M2C_UNK arg1) {
    void **temp_r0;

    func_02045b0c(arg0 + 0x14);
    if (func_02045b04(arg0 + 0x44) == 0) {
        return;
    }
    temp_r0 = func_02045afc(arg0 + 0x44);
    M2C_FIELD(*temp_r0, M2C_UNK(**)(void **, M2C_UNK), 0x10)(temp_r0, arg1);
}
