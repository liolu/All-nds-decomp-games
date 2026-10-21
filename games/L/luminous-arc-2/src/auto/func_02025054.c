#include "m2c.h"

M2C_UNK func_02007f40();                            /* extern */
M2C_UNK func_0200dc00(M2C_UNK *);                   /* extern */
M2C_UNK func_0200dc18(M2C_UNK *);                   /* extern */
M2C_UNK func_020251bc();                            /* extern */
M2C_UNK func_0202538c();                            /* extern */
M2C_UNK func_02025ba0();                            /* extern */
extern M2C_UNK data_02167be0;
extern M2C_UNK data_02167bf0;
extern M2C_UNK data_02167bfc;
extern M2C_UNK func_0202510c;
extern M2C_UNK func_02025144;

void func_02025054(void) {
    if (M2C_FIELD(&data_02167be0, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(&data_02167be0, s32 *, 0xC) = 1;
    func_02007f40();
    M2C_FIELD(&data_02167be0, M2C_UNK **, 0x10) = &func_0202510c;
    M2C_FIELD(&data_02167be0, s32 *, 0x14)      = 0;
    M2C_FIELD(&data_02167be0, M2C_UNK **, 0x1C) = &func_02025144;
    M2C_FIELD(&data_02167be0, s32 *, 0x20)      = 0;
    func_0200dc00(&data_02167bf0);
    func_0200dc18(&data_02167bfc);
    func_020251bc();
    func_02025ba0();
    func_0202538c();
    M2C_FIELD(&data_02167be0, s8 *, 0)  = -1;
    M2C_FIELD(&data_02167be0, s32 *, 4) = 1;
}
