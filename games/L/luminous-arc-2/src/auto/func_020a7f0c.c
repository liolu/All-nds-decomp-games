/* compiler: 1.2/sp3  */
#include "m2c.h"

s32 func_020a65a4();                         /* extern */
M2C_UNK func_020aa638();                  /* extern */
void *func_020aa6b4();                    /* extern */

void func_020a7f0c(M2C_UNK arg0, s32 arg1) {
    s32 sp0;
    s32 temp_r1;
    void *temp_r0;

    sp0     = arg1;
    temp_r0 = func_020aa6b4(func_020a65a4(), &sp0);
    if (temp_r0 == NULL) {
        return;
    }
    temp_r1                      = M2C_FIELD(temp_r0, s32 *, 4) - 1;
    M2C_FIELD(temp_r0, s32 *, 4) = temp_r1;
    if (temp_r1 != 0) {
        return;
    }
    func_020aa638(func_020a65a4(arg0), &sp0);
}
