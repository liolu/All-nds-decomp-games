#include "m2c.h"

M2C_UNK func_02004dfc(void *, M2C_UNK *, M2C_UNK *, void *, s32, s32); /* extern */
s32 func_020050cc(void *);                          /* extern */
M2C_UNK func_02005198(void *);                      /* extern */
M2C_UNK func_02005888(s32);                         /* extern */
extern M2C_UNK data_02170270;
extern M2C_UNK data_02170278;
extern M2C_UNK func_0207fea8;

void func_0207faf4(void) {
    func_02005888(M2C_FIELD(&data_02170270, void **, 8) + 0x13D8);
    M2C_FIELD(M2C_FIELD(&data_02170270, void **, 8), s32 *, 0x13F0) = 0;
    if ((M2C_FIELD(M2C_FIELD(&data_02170270, void **, 8), s32 *, 0x1384) != 0) &&
        (func_020050cc(M2C_FIELD(&data_02170270, void **, 8) + 0x1318) == 0)) {
        return;
    }
    func_02004dfc(M2C_FIELD(&data_02170270, void **, 8) + 0x1318, &func_0207fea8, &data_02170278,
                  M2C_FIELD(&data_02170270, void **, 8) + 0x1000, 0x1000, 0x10);
    func_02005198(M2C_FIELD(&data_02170270, void **, 8) + 0x1318);
}
