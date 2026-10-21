#include "m2c.h"

void *func_0207b9f4(M2C_UNK);                       /* extern */
s8 func_0207baac();                                 /* extern */

void func_0207bac8(s32 arg0) {
    void *temp_r0;

    temp_r0                        = func_0207b9f4(1);
    M2C_FIELD(temp_r0, s32 *, 0xC) = arg0;
    M2C_FIELD(temp_r0, s8 *, 0xA)  = func_0207baac();
}
