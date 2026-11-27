/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s8 func_02031cf0(void *, M2C_UNK, M2C_UNK);         /* extern */
s32 func_02036484(void *);                          /* extern */
s32 func_02036d68(void *);                          /* extern */
M2C_UNK func_02037398();                            /* extern */

void func_0203101c(void *arg0) {
    s8 temp_r0;

    func_02037398();
    if (func_02036484(arg0) != 0) {
        return;
    }
    if (func_02036d68(arg0) != 0) {
        return;
    }
    temp_r0 = func_02031cf0(arg0, 0xA, 1);
    switch (temp_r0) {                              /* irregular */
        case 0x5:
            return;
        case 0xB:
            return;
        case 0xFF:
            return;
        default:
            M2C_FIELD(arg0, s32 *, 0x2842C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2842C) | 0x400);
            M2C_FIELD(arg0, s8 *, 0x2944D)  = temp_r0;
            return;
    }
}
