#include "m2c.h"

M2C_UNK func_0205c22c();                            /* extern */
M2C_UNK func_ov003_021dfe28(u8, u8, M2C_UNK, u8, s32); /* extern */
M2C_UNK func_ov003_021dfef0();                      /* extern */
extern M2C_UNK data_0216ce68;
extern M2C_UNK data_02183a4c;

void func_0206a308(void) {
    M2C_FIELD(&data_0216ce68, s8 *, 0xBA4) = 0;
    M2C_FIELD(&data_0216ce68, s8 *, 0xBA6) = 0;
    M2C_FIELD(&data_0216ce68, s8 *, 0xBAF) = 2;
    func_ov003_021dfe28(M2C_FIELD(&data_02183a4c, u8 *, 0x3E4), M2C_FIELD(&data_02183a4c, u8 *, 0x3E5), 0,
                        M2C_FIELD(&data_02183a4c, u8 *, 0x422), (s32) M2C_FIELD(&data_02183a4c, u8 *, 0x423));
    func_0205c22c();
    func_ov003_021dfef0();
}
