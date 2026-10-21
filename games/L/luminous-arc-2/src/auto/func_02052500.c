#include "m2c.h"

M2C_UNK func_0206b0e0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_0206c388();                                /* extern */
M2C_UNK func_0206c4b4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020cd4d8();                            /* extern */
M2C_UNK func_020cd508(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_ov003_021f0d5c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov003_02201230();                      /* extern */
extern M2C_UNK data_0216bc68;
extern M2C_UNK data_0216bc80;

void func_02052500(void) {
    if (func_0206c388() > 0) {
        func_0206c4b4(0xF, 0, 0, 0, 0, 0);
    }
    func_ov003_02201230();
    func_020cd4d8();
    if (M2C_FIELD(&data_0216bc68, u8 *, 6) == 1) {
        func_ov003_021f0d5c(1, 1, 1, 6);
        func_020cd508(2, 0xC, 0);
    } else {
        func_0206b0e0(1, 1, 6);
        func_020cd508(2, 6, 0);
    }
    M2C_FIELD(&data_0216bc80, u16 *, 0xA) = (u16) M2C_FIELD(&data_0216bc80, u16 *, 8);
    M2C_FIELD(&data_0216bc80, s8 *, 0x1A) = 0;
}
