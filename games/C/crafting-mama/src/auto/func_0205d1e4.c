#include "m2c.h"

s32 func_0205d1e4(void *arg0, void *arg1, void *arg2) {
    s32 temp_ip;
    s32 temp_ip_2;
    s32 temp_ip_3;
    s32 temp_r2_2;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg2, void **, 0x30);
    temp_ip = M2C_FIELD(temp_r2, s16 *, 8) + M2C_FIELD(arg1, s16 *, 2);
    if ((s32) M2C_FIELD(arg0, s16 *, 0) < temp_ip) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) temp_ip;
    }
    temp_ip_2 = M2C_FIELD(temp_r2, s16 *, 0xA) + M2C_FIELD(arg1, s16 *, 4);
    if ((s32) M2C_FIELD(arg0, s16 *, 2) < temp_ip_2) {
        M2C_FIELD(arg0, s16 *, 2) = (s16) temp_ip_2;
    }
    temp_ip_3 = M2C_FIELD(temp_r2, s16 *, 0xC) + M2C_FIELD(arg1, s16 *, 2);
    if ((s32) M2C_FIELD(arg0, s16 *, 4) > temp_ip_3) {
        M2C_FIELD(arg0, s16 *, 4) = (s16) temp_ip_3;
    }
    temp_r2_2 = M2C_FIELD(temp_r2, s16 *, 0xE) + M2C_FIELD(arg1, s16 *, 4);
    if ((s32) M2C_FIELD(arg0, s16 *, 6) > temp_r2_2) {
        M2C_FIELD(arg0, s16 *, 6) = (s16) temp_r2_2;
    }
    return 1;
}
