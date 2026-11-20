#include "m2c.h"

M2C_UNK func_020075b0(M2C_UNK *, M2C_UNK, s32);     /* extern */
M2C_UNK func_02058930(M2C_UNK);                     /* extern */
M2C_UNK func_0205919c();                            /* extern */
s32 func_0207f550();                                /* extern */
s32 func_0207f580();                                /* extern */
extern s8 data_02151424;
extern s8 data_02151425;
extern s8 data_02151430;
extern M2C_UNK data_02172960;
extern M2C_UNK data_0217296c;

void func_020a3d4c(void *arg0) {
    func_020075b0(&data_0217296c, 0, 0x10AC);
    func_0205919c();
    if (func_0207f550() != 0) {
        func_0205919c();
        if (func_0207f580() != 0) {
            M2C_FIELD(&data_0217296c, s32 *, 0xE7C) = 0;
            M2C_FIELD(arg0, u8 *, 0x77B)            = 7U;
            M2C_FIELD(&data_0217296c, s32 *, 0xE74) = 0;
        } else {
            M2C_FIELD(&data_0217296c, s32 *, 0xE7C) = 1;
            M2C_FIELD(arg0, u8 *, 0x77B)            = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 1);
        }
    } else {
        M2C_FIELD(&data_0217296c, s32 *, 0xE7C) = 1;
        func_02058930(0xE);
        M2C_FIELD(arg0, u8 *, 0x77B) = 6U;
    }
    data_02151425                      = 0;
    data_02151430                      = 1;
    data_02151424                      = 4;
    M2C_FIELD(&data_02172960, s8 *, 1) = 0;
    *(u16 *) 0x04000204 |= 0x8000;
}
