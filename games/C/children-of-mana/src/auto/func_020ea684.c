/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020e9f2c(s32);                         /* extern */
M2C_UNK func_020ea118();                            /* extern */

void func_020ea684(void *arg0) {
    s32 temp_r1;
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, volatile u32 *, 0);
    switch (temp_r0) {
        case 0:
        case 2:
        case 5:
            break;
        default:
            break;
        case 1:
        case 4:
            temp_r1 = M2C_FIELD(arg0, volatile s32 *, 0x94);
            if (temp_r1 != 0) {
                M2C_FIELD(arg0, volatile s32 *, 0x8C) =
                    (s32) (M2C_FIELD(arg0, volatile s32 *, 0x8C) +
                           ((s32) (M2C_FIELD(arg0, volatile s32 *, 0x90) - M2C_FIELD(arg0, volatile s32 *, 0x8C)) / temp_r1));
                M2C_FIELD(arg0, volatile s32 *, 0x94) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x94) - 1);
            } else if (temp_r0 == 1) {
                M2C_FIELD(arg0, volatile u32 *, 0) = 2U;
            } else {
                M2C_FIELD(arg0, volatile u32 *, 0) = 5U;
            }
            break;
        case 3:
            M2C_FIELD(arg0, volatile s32 *, 8) = (s32) (M2C_FIELD(arg0, volatile s32 *, 8) - 1);
            if ((s32) M2C_FIELD(arg0, volatile s32 *, 8) <= 0) {
                M2C_FIELD(arg0, volatile s32 *, 0x8C) = 0;
                func_020e9f2c(M2C_FIELD(arg0, volatile s32 *, 0x98));
                M2C_FIELD(arg0, volatile u32 *, 0) = 2U;
            }
            break;
    }
    if (M2C_FIELD(arg0, volatile s32 *, 0x98) == 0) {
        return;
    }
    func_020ea118();
}
