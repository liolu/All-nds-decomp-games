#include "m2c.h"

M2C_UNK func_02069ea4();                      /* extern */
M2C_UNK func_02069f04();                      /* extern */
M2C_UNK func_0206a0cc();                         /* extern */
s32 func_0206bdec();                             /* extern */
s32 func_02073638();                             /* extern */
M2C_UNK func_02073644();                /* extern */
s32 func_02073e98();                             /* extern */
M2C_UNK func_020b448c();                /* extern */

void func_0206aff0(void *arg0) {
    s32 temp_r0;

    if (func_02073e98(M2C_FIELD(arg0, s32 *, 0x1C)) != 0) {
        if (func_02073638(M2C_FIELD(arg0, s32 *, 0x1C)) != 0) {
            func_02073644(M2C_FIELD(arg0, s32 *, 0x1C), 0);
        }
    } else {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x58);
        switch (temp_r0) {                          /* irregular */
            case 0:
                func_02069f04(arg0);
                *(M2C_UNK *) 0x04000540 = 0;
                break;
            case 1:
                func_0206a0cc(M2C_FIELD(arg0, s32 *, 0xA0));
                *(M2C_UNK *) 0x04000540 = 0;
                break;
            case 3:
                func_02069ea4(arg0);
                *(s32 *) 0x04000540 = 0;
                break;
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x58) == 4) {
        return;
    }
    func_020b448c(func_0206bdec(M2C_FIELD(arg0, s32 *, 4)), 2);
}
