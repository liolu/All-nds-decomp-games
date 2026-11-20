/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202b024(void *, s32);                 /* extern */
M2C_UNK func_0202b678(void *, void *);              /* extern */

void func_0203752c(void *arg0) {
    void **temp_r0;

    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_0202b678(arg0 + 0x1C, arg0 + 0xC);
        func_0202b024(arg0 + 0x1C, M2C_FIELD(arg0, s32 *, 4));
    }
    temp_r0 = M2C_FIELD(arg0, void ***, 0x4C);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(*temp_r0, M2C_UNK(**)(), 0x10)(temp_r0);
}
