#include "m2c.h"

M2C_UNK func_02004ad4(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_02004e88(M2C_UNK *);                   /* extern */
M2C_UNK func_0200516c(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_020d9ab4;
extern M2C_UNK data_020d9abc;
extern M2C_UNK data_020d9adc;
extern M2C_UNK data_020d9bf0;
extern M2C_UNK data_020da0b0;
extern M2C_UNK func_02031860;

void func_02031108(s32 arg0) {
    if (M2C_FIELD(&data_020d9ab4, s32 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_020d9ab4, s32 *, 4) = 0;
    func_0200516c(&data_020d9abc, &data_020d9adc, 8);
    func_02004ad4(&data_020d9bf0, &func_02031860, 0, &data_020da0b0, 0x400, arg0);
    M2C_FIELD(&data_020d9ab4, s32 *, 0) = 1;
    func_02004e88(&data_020d9bf0);
}
