#include "m2c.h"

M2C_UNK func_02083210(M2C_UNK, s32, M2C_UNK);       /* extern */
extern M2C_UNK data_020cc1b0;

void func_02018344(s32 arg0) {
    if ((arg0 != 0) && (arg0 != 2)) {

    } else {
        func_02083210(0, 0x02260000, 0x6000);
        M2C_FIELD(&data_020cc1b0, u8 *, 0xA8) = (u8) (M2C_FIELD(&data_020cc1b0, u8 *, 0xA8) | 1);
    }
    if ((u32) (arg0 - 1) > 1U) {
        return;
    }
    func_02083210(0, 0x02266000, 0x6000);
    M2C_FIELD(&data_020cc1b0, u8 *, 0xA8) = (u8) (M2C_FIELD(&data_020cc1b0, u8 *, 0xA8) | 2);
}
