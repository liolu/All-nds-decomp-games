/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(s32);                         /* extern */
M2C_UNK func_020774c8(void *);                      /* extern */
M2C_UNK func_0207aa44(s32);                         /* extern */
M2C_UNK func_0207aa74(s32);                         /* extern */
M2C_UNK func_0207aa80(s32);                         /* extern */
M2C_UNK func_0207b218(s32);                         /* extern */

void func_020e2fa0(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    if (M2C_FIELD(arg0, u8 *, 0x250) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_0207aa44(M2C_FIELD(arg0, s32 *, 0x188));
            func_0207aa80(M2C_FIELD(arg0, s32 *, 0x188));
            func_0207aa74(M2C_FIELD(arg0, s32 *, 0x188));
            temp_r4 = M2C_FIELD(arg0, s32 *, 0x188);
            if (temp_r4 != 0) {
                if (temp_r4 != 0) {
                    func_0207b218(temp_r4);
                    func_0200f2c4(temp_r4);
                }
                M2C_FIELD(arg0, s32 *, 0x188) = 0;
            }
            break;
        case 1:
            func_020774c8(arg0 + 0x18C);
            break;
    }
    M2C_FIELD(arg0, u8 *, 0x250) = 0U;
}
