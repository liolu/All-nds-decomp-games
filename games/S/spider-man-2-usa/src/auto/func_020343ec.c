/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201ea68(s32, M2C_UNK);                    /* extern */
extern M2C_UNK data_02076730;

void func_020343ec(void *arg0) {
    s32 temp_r0;

    temp_r0 = func_0201ea68(M2C_FIELD(arg0, s32 *, 0x7C), 1);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, s32 *, 0x80) = 0;
        M2C_FIELD(arg0, s32 *, 0x84) = 3;
        M2C_FIELD(arg0, s32 *, 0x88) = temp_r0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) M2C_FIELD(&data_02076730, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x84) = (s32) M2C_FIELD(&data_02076730, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) M2C_FIELD(&data_02076730, s32 *, 8);
}
