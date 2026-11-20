#include "m2c.h"

M2C_UNK func_0200536c(M2C_UNK);                     /* extern */
M2C_UNK func_02095da0(M2C_UNK);                     /* extern */
M2C_UNK func_02095db0();                            /* extern */
s32 func_0209a940();                                /* extern */
s32 func_0209c60c();                                /* extern */
extern void *data_0211d7ec;
extern s32 data_02170d54;
extern s32 data_02172544;
extern M2C_UNK data_02172550;

s32 func_0209c4c0(void) {
    s32 temp_r0;

    if (data_02172544 == 0) {
        data_02172544 = data_02170d54;
    }
    if (func_0209c60c() == -0x1A) {
        do {
            func_0200536c(0x64);
        } while (func_0209c60c() == -0x1A);
    }
    temp_r0 = func_0209a940();
    if (temp_r0 >= 0) {
        func_02095db0();
        func_02095da0(0);
        if (M2C_FIELD(data_0211d7ec, s32 *, 0x28) == 0) {
            M2C_FIELD(data_0211d7ec, M2C_UNK(**)(s32), 0x1C)(M2C_FIELD(&data_02172550, s32 *, 0x1C));
        }
        data_0211d7ec = NULL;
    }
    return temp_r0;
}
