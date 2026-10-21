#include "m2c.h"

M2C_UNK func_02058930(s32);                         /* extern */
s32 func_02058f40();                                /* extern */
M2C_UNK func_0205919c();                            /* extern */
s32 func_0207f640();                                /* extern */
M2C_UNK func_0207f664();                            /* extern */
extern u8 data_02172960;
extern M2C_UNK data_0217296c;

void func_020a49b0(void *arg0) {
    if ((func_02058f40() != 1) && (data_02172960 == 0)) {
        return;
    }
    func_02058930(0xFFFE);
    func_0205919c();
    if (func_0207f640() != 0) {
        func_0205919c();
        func_0207f664();
        M2C_FIELD(&data_0217296c, s32 *, 0xE80) = 1;
    }
    M2C_FIELD(arg0, u8 *, 0x77B) = (u8) (M2C_FIELD(arg0, u8 *, 0x77B) + 1);
}
