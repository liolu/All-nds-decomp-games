#include "m2c.h"

M2C_UNK func_02004e20(void *);                      /* extern */
s32 func_020066e0();                                /* extern */
M2C_UNK func_020066f4(s32);                         /* extern */

void func_0200869c(void *arg0, s32 arg1) {
    s32 temp_r6;
    void **temp_r0;
    void *temp_r1;

    temp_r6 = func_020066e0();
    temp_r1 = M2C_FIELD(arg0, void **, 0);
    temp_r0 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void ***, 4) = temp_r0;
    }
    if (temp_r0 != NULL) {
        *temp_r0 = temp_r1;
    }
    M2C_FIELD(arg0, void **, 0)  = NULL;
    M2C_FIELD(arg0, void ***, 4) = NULL;
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) (M2C_FIELD(arg0, s32 *, 0xC) & ~0x4F);
    M2C_FIELD(arg0, s32 *, 0x14) = arg1;
    func_02004e20(arg0 + 0x18);
    func_020066f4(temp_r6);
}
