#include "m2c.h"

s32 func_02059200();                                /* extern */
s32 func_02084ebc(s32, M2C_UNK, M2C_UNK *, void *); /* extern */
M2C_UNK func_020a4b24(void *);                      /* extern */
extern M2C_UNK data_0217296c;
extern M2C_UNK func_020a4ba0;

void func_020a4154(void *arg0) {
    if (func_02084ebc(func_02059200(), 0, &func_020a4ba0, arg0) != 0) {
        M2C_FIELD(&data_0217296c, s32 *, 0xE78) = 1;
        M2C_FIELD(arg0, u8 *, 0x77B)            = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 1);
        return;
    }
    func_020a4b24(arg0);
    M2C_FIELD(arg0, u8 *, 0x77B) = 0x27U;
}
