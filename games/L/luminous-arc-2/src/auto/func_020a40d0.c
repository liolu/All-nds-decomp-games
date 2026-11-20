#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_0205919c();                                /* extern */
s32 func_020591a8();                                /* extern */
s32 func_020591b4();                                /* extern */
M2C_UNK func_02084848(M2C_UNK *, s32, s32, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32); /* extern */
extern M2C_UNK data_0212d880;
extern M2C_UNK data_0212d890;
extern M2C_UNK data_021729d0;

void func_020a40d0(void *arg0) {
    s32 temp_r4;
    s32 temp_r5;

    func_020075b0(&data_021729d0, 0, 0xE10);
    temp_r5 = func_0205919c();
    temp_r4 = func_020591a8();
    func_02084848(&data_021729d0, temp_r5, 0x2E6E, &data_0212d880, &data_0212d890, 0, 0, temp_r4, func_020591b4());
    M2C_FIELD(arg0, u8 *, 0x77B) = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 1);
}
