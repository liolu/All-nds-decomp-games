#include "m2c.h"

s32 func_02059574();                                /* extern */
s32 func_0208510c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, void *, M2C_UNK *, s32); /* extern */
M2C_UNK func_020852b8(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020886f4(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020a4b24(void *);                      /* extern */
extern M2C_UNK data_0212d898;
extern M2C_UNK data_02172960;
extern M2C_UNK data_02172964;
extern M2C_UNK data_0217296c;
extern M2C_UNK func_020a4cdc;
extern M2C_UNK func_020a4e58;
extern M2C_UNK func_020a4f54;

void func_020a4394(void *arg0) {
    s32 temp_r5;

    M2C_FIELD(&data_02172960, s32 *, 4) = func_02059574();
    func_020886f4(0, &data_0212d898, &data_02172964);
    temp_r5 = func_0208510c(0, 0, 2, 0, &func_020a4cdc, arg0, &func_020a4e58, 0);
    func_020852b8(&func_020a4f54, arg0);
    M2C_FIELD(&data_0217296c, s32 *, 0xE94) = 0;
    M2C_FIELD(&data_0217296c, s32 *, 0xE9C) = 1;
    if (temp_r5 != 0) {
        M2C_FIELD(arg0, u8 *, 0x77B) = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 2);
        return;
    }
    func_020a4b24(arg0);
    M2C_FIELD(arg0, u8 *, 0x77B) = 0x27U;
}
