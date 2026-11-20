#include "m2c.h"

M2C_UNK func_02061c28(M2C_UNK *);                   /* extern */
M2C_UNK func_02061c34(M2C_UNK *);                   /* extern */
M2C_UNK func_02061fec(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_020d032c;
extern M2C_UNK data_020d0344;
extern M2C_UNK data_021635e8;
extern M2C_UNK data_021635f0;

void func_020b156c(void) {
    u8 sp4[12];

    func_02061c28(sp4);
    M2C_FIELD(&data_021635e8, s32 *, 8) = 0;
    func_02061fec(sp4, &data_020d032c, &data_021635f0, 8, &data_020d0344);
    func_02061c34(sp4);
}
