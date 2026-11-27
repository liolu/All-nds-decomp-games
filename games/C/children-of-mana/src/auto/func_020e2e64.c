/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02077390(void *);                      /* extern */
M2C_UNK func_0207aa8c(s32);                         /* extern */
M2C_UNK func_0207aac8(s32);                         /* extern */

void func_020e2e64(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0x251) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_0207aa8c(M2C_FIELD(arg0, s32 *, 0x188));
            func_0207aac8(M2C_FIELD(arg0, s32 *, 0x188));
            break;
        case 1:
            func_02077390(arg0 + 0x18C);
            break;
    }
    M2C_FIELD(arg0, u8 *, 0x251) = 0U;
}
