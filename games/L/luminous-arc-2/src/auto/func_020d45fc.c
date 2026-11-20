#include "m2c.h"

s32 func_020d4904(M2C_UNK);                         /* extern */
M2C_UNK func_020d4ae8(u8);                          /* extern */
M2C_UNK func_020d4b24(u8);                          /* extern */
s32 func_ov003_021ea634();                          /* extern */
M2C_UNK func_ov003_021f0d5c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02152c24;
extern M2C_UNK data_0216be68;
extern M2C_UNK data_0216ce68;

void func_020d45fc(void) {
    s32 var_r4;

    var_r4 = 0;
    if (M2C_FIELD(&data_0216be68, u8 *, 0x29) == 0) {
        if (func_ov003_021ea634() != 0) {
            var_r4 = 1;
        } else {
            M2C_FIELD(&data_0216ce68, u8 *, 0xBAA) = 3U;
        }
    } else if (M2C_FIELD(&data_0216be68, u8 *, 0x29) == 1) {
        func_ov003_021f0d5c(0, 2, 4, 0);
        var_r4 = 1;
    } else {
        func_ov003_021f0d5c(1, 2, 4, 0);
        var_r4 = 1;
    }
    if (var_r4 == 0) {
        return;
    }
    func_020d4b24(M2C_FIELD(&data_0216be68, u8 *, 0x29));
    if (func_020d4904(1) == 0) {
        return;
    }
    func_020d4ae8(M2C_FIELD(&data_0216be68, u8 *, 0x29));
    M2C_FIELD(&data_02152c24, s16 *, 4)    = 0;
    M2C_FIELD(&data_0216ce68, u8 *, 0xBAA) = (u8) (M2C_FIELD(&data_0216ce68, u8 *, 0xBAA) + 1);
}
