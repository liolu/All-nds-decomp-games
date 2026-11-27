#include "m2c.h"

M2C_UNK func_020c0138(void *);                      /* extern */
void *func_020c3558(void **);                       /* extern */

void func_020c0794(void *arg0, void *arg1) {
    void **temp_r0;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r1_2;

    temp_r0 = M2C_FIELD(arg0, void ***, 0xC);
    if ((temp_r0 == NULL) || (M2C_FIELD(*temp_r0, s32(**)(), 0x68)(temp_r0) == 0)) {
        func_020c0138(arg0);
        temp_r1                           = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(temp_r1, s32 *, 0xC)    = (s32) M2C_FIELD(arg1, s32 *, 0);
        M2C_FIELD(temp_r1, s32 *, 0x10)   = (s32) M2C_FIELD(arg1, s32 *, 4);
        M2C_FIELD(temp_r1, s32 *, 0x14)   = (s32) M2C_FIELD(arg1, s32 *, 8);
        temp_r1_2                         = M2C_FIELD(arg0, void **, 4);
        M2C_FIELD(temp_r1_2, u16 *, 0x34) = (u16) (M2C_FIELD(temp_r1_2, u16 *, 0x34) | 2);
        return;
    }
    temp_r0_2 = func_020c3558(M2C_FIELD(arg0, void ***, 0xC));
    if (temp_r0_2 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0_2, s32 *, 0x330) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(temp_r0_2, s32 *, 0x334) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(temp_r0_2, s32 *, 0x338) = (s32) M2C_FIELD(arg1, s32 *, 8);
}
