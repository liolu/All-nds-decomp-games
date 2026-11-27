#include "m2c.h"

s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
extern void *data_020d1d24;

s32 func_02035e94(M2C_UNK arg0) {
    s32 temp_ip;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    if (M2C_FIELD(data_020d1d24, u8 *, 6) != 0) {
        return 1;
    }
    temp_r5                         = func_02012a90(arg0, 1);
    temp_r4                         = func_02012a90(arg0, 2);
    temp_r0                         = func_02012a90(arg0, 3);
    temp_ip                         = (temp_r5 * 0xEC) + (s32) (data_020d1d24 + 0x634);
    M2C_FIELD(temp_ip, s8 *, 0x75)  = 2;
    M2C_FIELD(temp_ip, s32 *, 0xAC) = (s32) (M2C_FIELD(temp_ip, u8 *, 0x6C) << 0xC);
    M2C_FIELD(temp_ip, s32 *, 0xB0) = (s32) (temp_r4 << 0xC);
    M2C_FIELD(temp_ip, s32 *, 0xB4) = temp_r0;
    M2C_FIELD(temp_ip, s32 *, 0xB8) = 0;
    return 1;
}
