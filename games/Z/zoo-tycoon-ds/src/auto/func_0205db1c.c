/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0205db1c(void *arg0, u8 arg1, s32 arg2, s32 arg3, u8 arg4) {
    s32 temp_r2;
    u8 temp_ip;
    u8 temp_r3;

    temp_r2 = (((M2C_FIELD(arg0, s8 *, 0x118C8) * arg3) + arg2) * 0x1C) + (s32) (arg0 + 0x758);
    if (M2C_FIELD(temp_r2, u8 *, 0xF) == 0xB) {
        return;
    }
    temp_ip = M2C_FIELD(temp_r2, u8 *, 6);
    if (temp_ip == arg1) {
        return;
    }
    if (M2C_FIELD(temp_r2, u8 *, 7) == 0) {
        M2C_FIELD(temp_r2, u8 *, 7) = (u8) (temp_ip + 1);
    }
    M2C_FIELD(temp_r2, u8 *, 6) = arg1;
    temp_r3                     = M2C_FIELD(temp_r2, u8 *, 4);
    if ((temp_r3 == 0xF) || (temp_r3 == 0x11)) {
        if (arg1 == 0xB) {
            M2C_FIELD(temp_r2, u8 *, 5)     = temp_r3;
            M2C_FIELD(temp_r2, u8 *, 4)     = 9U;
            M2C_FIELD(arg0, u16 *, 0x27DA4) = (u16) (M2C_FIELD(arg0, u16 *, 0x27DA4) + 1);
        } else {
            M2C_FIELD(temp_r2, u8 *, 5)     = temp_r3;
            M2C_FIELD(temp_r2, u8 *, 4)     = 0x13U;
            M2C_FIELD(arg0, u16 *, 0x27DA6) = (u16) (M2C_FIELD(arg0, u16 *, 0x27DA6) + 1);
        }
    }
    if (arg4 == 1) {
        M2C_FIELD(temp_r2, u8 *, 5) = 0U;
        M2C_FIELD(temp_r2, u8 *, 7) = 0U;
    }
    M2C_FIELD(arg0, u16 *, 0x27D9A) = (u16) (M2C_FIELD(arg0, u16 *, 0x27D9A) + 1);
}
