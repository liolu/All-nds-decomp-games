#include "m2c.h"

s32 func_0208f88c(void *);                          /* extern */
M2C_UNK func_0208fbb0(void *);                      /* extern */
s32 func_02093494(s32);                             /* extern */

void *func_0208f4e0(void *arg0, s16 arg1, s16 arg2, u32 arg3) {
    s32 temp_r0_2;
    u32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s16 *, 4)    = arg1;
    M2C_FIELD(arg0, s16 *, 6)    = arg2;
    M2C_FIELD(arg0, s8 *, 8)     = 0;
    M2C_FIELD(arg0, u32 *, 0xC)  = arg3;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    temp_r0                      = M2C_FIELD(arg0, u32 *, 0xC);
    switch (temp_r0) {
        case 1:
        case 2:
        case 3:
        case 6:
            break;
        default:
        /* fallthrough */
        case 0:
        case 4:
        case 5:
            if (temp_r0 != 4) {
                M2C_FIELD(arg0, u32 *, 0xC) = 4U;
            }
            break;
    }
    temp_r0_2                 = func_0208f88c(arg0);
    M2C_FIELD(arg0, s32 *, 0) = func_02093494((temp_r0_2 * 2) - temp_r0_2);
    func_0208fbb0(arg0);
    return arg0;
}
