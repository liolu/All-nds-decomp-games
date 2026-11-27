#include "m2c.h"

M2C_UNK func_02007e70(M2C_UNK *);                   /* extern */
M2C_UNK func_0200c160(s32, M2C_UNK);                /* extern */
M2C_UNK func_0200c2a8();                            /* extern */
M2C_UNK func_0200c31c(M2C_UNK);                     /* extern */
M2C_UNK func_0200fb20();                            /* extern */
M2C_UNK func_0201450c();                            /* extern */
M2C_UNK func_02014528(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK data_0209d530;
extern M2C_UNK data_020d6380;

void func_02036b10(void) {
    func_0200fb20();
    func_0200c2a8();
    func_0200c31c(1);
    func_0200c160(0x02290000, 0x18000);
    func_0201450c();
    func_02014528(0, 0);
    M2C_FIELD(&data_020d6380, s32 *, 0x24) = 0;
    func_02007e70(&data_0209d530);
}
