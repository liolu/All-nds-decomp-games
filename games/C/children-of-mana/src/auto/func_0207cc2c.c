/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209fe9c(s32, u8);                     /* extern */

void func_0207cc2c(void *arg0, u8 arg1) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x270) == arg1) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x270) = arg1;
    temp_r0                      = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_r0 == 0) {
        return;
    }
    func_0209fe9c(temp_r0, M2C_FIELD(arg0, u8 *, 0x270));
}
