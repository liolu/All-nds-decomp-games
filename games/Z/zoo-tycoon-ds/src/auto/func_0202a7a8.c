/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02038944(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020a7a34;
extern M2C_UNK data_020a89a4;
extern M2C_UNK data_020ce12c;

void func_0202a7a8(void *arg0) {
    s32 temp_r3;
    u8 temp_ip;

    if (M2C_FIELD(&data_020ce12c, u8 *, 0x44) != 0) {
        return;
    }
    temp_ip = ((s8 *) &data_020a7a34)[M2C_FIELD(&data_020ce12c, u8 *, 0x45)];
    if (temp_ip == 0xFF) {
        return;
    }
    if ((s32) (((M2C_FIELD(&data_020ce12c, u8 *, 0x42) - 1) * 0xC) + M2C_FIELD(&data_020ce12c, u8 *, 0x43)) <= (s32) temp_ip) {
        return;
    }
    temp_r3 = *((M2C_UNK *) ((s8 *) &data_020a89a4 + (M2C_FIELD(&data_020ce12c, u8 *, 0x45) * 4)));
    if (temp_r3 == (temp_r3 & M2C_FIELD(arg0, s32 *, 0x2B110))) {
        M2C_FIELD(arg0, s8 *, 0x2B32B) = 0;
        if (func_02038944(arg0, 0, 0x33, 4, 2) != 0) {
            M2C_FIELD(arg0, s8 *, 0x28420) = 7;
        }
        M2C_FIELD(&data_020ce12c, s32 *, 0x34) =
            (s32) (M2C_FIELD(&data_020ce12c, s32 *, 0x34) | (1 << M2C_FIELD(&data_020ce12c, u8 *, 0x45)));
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x2B32B) = 0;
    if (func_02038944(arg0, 0, 0x34, 4, 2) != 0) {
        M2C_FIELD(arg0, s8 *, 0x28420) = 8;
    }
}
