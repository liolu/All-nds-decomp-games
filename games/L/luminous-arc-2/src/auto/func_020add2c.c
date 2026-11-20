#include "m2c.h"

M2C_UNK func_020afe40(void **, void *, M2C_UNK *);  /* extern */
M2C_UNK func_020afe70(void **, void *, s32);        /* extern */
extern M2C_UNK data_0212dbfc;
extern M2C_UNK data_0212dc08;
extern M2C_UNK data_0212dc14;
extern M2C_UNK data_0212dc24;
extern M2C_UNK data_0212dc2c;

s32 func_020add2c(void **arg0, void *arg1) {
    void *temp_r4;

    temp_r4 = *arg0;
    func_020afe40(arg0, temp_r4 + 0x210, &data_0212dbfc);
    func_020afe40(arg0, temp_r4 + 0x210, &data_0212dc08);
    func_020afe70(arg0, temp_r4 + 0x210, M2C_FIELD(temp_r4, s32 *, 0x198));
    func_020afe40(arg0, temp_r4 + 0x210, &data_0212dc14);
    func_020afe70(arg0, temp_r4 + 0x210, M2C_FIELD(arg1, s32 *, 0));
    func_020afe40(arg0, temp_r4 + 0x210, &data_0212dc24);
    func_020afe40(arg0, temp_r4 + 0x210, M2C_FIELD(arg1, M2C_UNK **, 0x14));
    func_020afe40(arg0, temp_r4 + 0x210, &data_0212dc2c);
    return 0;
}
