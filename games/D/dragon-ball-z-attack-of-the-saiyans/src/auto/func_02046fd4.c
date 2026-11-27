#include "m2c.h"

M2C_UNK func_020108a8(s32, s32);                    /* extern */
M2C_UNK func_0202c0f8(M2C_UNK *, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_0209f7a8;
extern void *data_020d1d24;

void func_02046fd4(void *arg0) {
    s32 temp_ip;
    s32 temp_r3;

    temp_ip = M2C_FIELD(arg0, s32 *, 0x2C) & 7;
    if (temp_ip == 1) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x28);
        if (temp_r3 != 0) {
            if (M2C_FIELD(data_020d1d24, u8 *, 0x423C) != 0) {
                return;
            }
            M2C_FIELD(data_020d1d24, u8 *, 0x423C) = (u8) temp_r3;
            goto block_5;
        }
    }
block_5:
    if (M2C_FIELD(data_020d1d24, u8 *, 0xB) != 0) {
        return;
    }
    switch (temp_ip) {                              /* irregular */
        case 1:
            if (M2C_FIELD(data_020d1d24, u8 *, 0xE) == 0) {
                return;
            }
        case 0:
            M2C_FIELD(data_020d1d24, u8 *, 0xE)    = 0U;
            M2C_FIELD(data_020d1d24, u8 *, 0x423C) = 0U;
            if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 0x10)) {
                M2C_FIELD(data_020d1d24, s8 *, 0x3C) = 1;
            }
            func_0202c0f8(&data_0209f7a8, M2C_FIELD(arg0, s32 *, 0x24), 1);
            func_020108a8(M2C_FIELD(arg0, s32 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x20));
            return;
    }
}
