/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02035fd4(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020d2550(s32);                             /* extern */
M2C_UNK func_020d29b0(s32);                         /* extern */
M2C_UNK func_020e8e98();                            /* extern */

void func_020e8934(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x38);
    switch (temp_r1) {                              /* irregular */
        case 0:
            func_020d29b0(M2C_FIELD(arg0, s32 *, 0x2C));
            func_02035fd4(0x10, 1);
            M2C_FIELD(arg0, s32 *, 0xC)  = 0x10;
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 1);
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0xC) > 0) {
                return;
            }
            if (func_020d2550(M2C_FIELD(arg0, s32 *, 0x2C)) != 0) {
                M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 1);
            }
            return;
        case 2:
            func_020e8e98(arg0);
            M2C_FIELD(arg0, s32 *, 8) = 0;
            return;
    }
}
