/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020019a4();                              /* extern */
s32 func_02073d38(u16, u16);                        /* extern */

void func_020094c4(s32 arg0, void *arg1) {
    s32 temp_r0_2;
    s32 temp_r6;
    void *temp_r0;

    temp_r0                      = func_020019a4();
    M2C_FIELD(arg1, u16 *, 0xC)  = (u16) M2C_FIELD(temp_r0, u16 *, 0x38);
    M2C_FIELD(arg1, u16 *, 0xE)  = (u16) M2C_FIELD(temp_r0, u16 *, 0x3A);
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) M2C_FIELD(temp_r0, s32 *, 0x2C);
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) M2C_FIELD(temp_r0, u8 *, 0x3C);
    M2C_FIELD(arg1, u32 *, 4)    = (u32) (M2C_FIELD(arg1, u16 *, 0xC) * M2C_FIELD(arg1, u16 *, 0xE));
    temp_r0_2                    = M2C_FIELD(arg1, s32 *, 0x14);
    if (temp_r0_2 == 2) {
        M2C_FIELD(arg1, u32 *, 4) = (u32) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 2);
    } else if (temp_r0_2 == 3) {
        M2C_FIELD(arg1, u32 *, 4) = (u32) ((u32) M2C_FIELD(arg1, u32 *, 4) >> 1);
    }
    temp_r6                   = func_02073d38(M2C_FIELD(temp_r0, u16 *, 0x34), M2C_FIELD(arg1, u16 *, 0xC));
    M2C_FIELD(arg1, s32 *, 8) = (s32) (temp_r6 * func_02073d38(M2C_FIELD(temp_r0, u16 *, 0x36), M2C_FIELD(arg1, u16 *, 0xE)));
}
