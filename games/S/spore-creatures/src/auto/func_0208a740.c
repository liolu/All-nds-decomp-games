#include "m2c.h"

M2C_UNK func_0208a7a0(s32, void ***);               /* extern */

void func_0208a740(void *arg0, void ***arg1) {
    void **sp0;
    void **temp_r3;

    if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {
        return;
    }
    if ((u32) (M2C_FIELD(arg0, s32 *, 8) - 2) <= 1U) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 8) = 3;
    temp_r3                   = *arg1;
    *arg1                     = NULL;
    sp0                       = temp_r3;
    func_0208a7a0(M2C_FIELD(arg0, s32 *, 0xC), &sp0);
    if (sp0 == NULL) {
        return;
    }
    M2C_FIELD(*sp0, M2C_UNK(**)(), 4)(sp0);
}
