#include "m2c.h"

s32 func_02069950();                                /* extern */
M2C_UNK func_0206998c();                            /* extern */
M2C_UNK func_0206a308();                            /* extern */
M2C_UNK func_0207aa14();                            /* extern */
M2C_UNK func_020cd4d8();                            /* extern */
M2C_UNK func_020cd508(u8, u8, u8);                  /* extern */
extern M2C_UNK data_0216be68;
extern M2C_UNK data_0216ce68;
extern M2C_UNK data_02183a4c;
extern M2C_UNK data_02183d4c;

s32 func_0206834c(void) {
    func_0206a308();
    if (M2C_FIELD(&data_0216be68, u8 *, 0x1B) == 3) {
        func_0207aa14();
        func_020cd4d8();
        func_020cd508(1U, 3U, 0U);
    } else if (M2C_FIELD(&data_0216be68, u8 *, 0x1B) != 4) {
        if (func_02069950() != 0) {
            func_0206998c();
            M2C_FIELD(&data_02183a4c, s8 *, 0x3E4) = 1;
            M2C_FIELD(&data_02183a4c, s8 *, 0x3E5) = 0;
            M2C_FIELD(&data_02183d4c, s16 *, 0xAE) = 0;
            M2C_FIELD(&data_0216ce68, s8 *, 0xBA6) = 0;
            func_0207aa14();
            func_020cd4d8();
            func_020cd508(1U, 1U, 0U);
        } else {
            func_0207aa14();
            func_020cd4d8();
            func_020cd508((u8) M2C_FIELD(&data_0216be68, u16 *, 0x64), (u8) M2C_FIELD(&data_0216be68, u16 *, 0x66),
                          (u8) M2C_FIELD(&data_0216be68, u16 *, 0x68));
        }
    }
    return 0;
}
