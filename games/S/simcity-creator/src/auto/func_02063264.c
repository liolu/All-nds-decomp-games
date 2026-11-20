#include "m2c.h"

M2C_UNK func_02014050(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK *func_02070c40(M2C_UNK, u16, u16);          /* extern */
extern M2C_UNK data_020ccd60;

s32 func_02063264(M2C_UNK arg0, void *arg1) {
    u8 sp0[16];

    func_02014050(sp0, &data_020ccd60, func_02070c40(arg0, M2C_FIELD(arg1, u16 *, 0), M2C_FIELD(arg1, u16 *, 2)));
    func_02014050(arg1 + 6, M2C_FIELD(M2C_FIELD(arg1, void **, 0x108), M2C_UNK **, 0x104), sp0);
    return 0;
}
