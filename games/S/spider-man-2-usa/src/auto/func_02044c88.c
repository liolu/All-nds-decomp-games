/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020559c4();                         /* extern */
M2C_UNK func_020559e0();                         /* extern */

void func_02044c88(void *arg0) {
    s32 temp_r4;

    temp_r4             = ((1 - M2C_FIELD(arg0, s32 *, 0x144)) * 0xA0) + (s32) (arg0 + 4);
    *(s32 *) 0x04000440 = 0;
    func_020559e0(temp_r4 + 0x60);
    *(M2C_UNK *) 0x04000440 = 2;
    func_020559c4(temp_r4 + 0x30);
}
