/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020e69f0();                            /* extern */
M2C_UNK func_020e69f4();                            /* extern */
M2C_UNK func_020e6a24();                            /* extern */
M2C_UNK func_020e6a48();                            /* extern */
M2C_UNK func_020e6a78();                            /* extern */
M2C_UNK func_020e6bcc();                            /* extern */
M2C_UNK func_020e6bfc();                            /* extern */

void func_020e6c60(void *arg0) {
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 0);
    switch (temp_r1) {
        default:
            break;
        case 0:
            func_020e6bfc(arg0);
            break;
        case 1:
            func_020e6bcc(arg0);
            break;
        case 2:
            func_020e6a78(arg0);
            break;
        case 3:
            func_020e6a48(arg0);
            break;
        case 4:
            func_020e6a24(arg0);
            break;
        case 5:
            func_020e69f4(arg0);
            break;
        case 6:
            func_020e69f0(arg0);
            break;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
}
