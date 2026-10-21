#include "m2c.h"

M2C_UNK func_020afe40(void **, void *, M2C_UNK *);  /* extern */
M2C_UNK func_020afe70(void **, void *, s32);        /* extern */
extern M2C_UNK data_0212e2c4;
extern M2C_UNK data_0212e3fc;
extern M2C_UNK data_0212e544;
extern M2C_UNK data_0212e55c;

s32 func_020b3b44(void **arg0, s32 arg1, s32 arg2) {
    void *temp_r4;

    temp_r4 = *arg0;
    func_020afe40(arg0, temp_r4 + 0x210, &data_0212e544);
    func_020afe70(arg0, temp_r4 + 0x210, M2C_FIELD(temp_r4, s32 *, 0x198));
    func_020afe40(arg0, temp_r4 + 0x210, &data_0212e2c4);
    func_020afe70(arg0, temp_r4 + 0x210, arg1);
    func_020afe40(arg0, temp_r4 + 0x210, &data_0212e55c);
    func_020afe70(arg0, temp_r4 + 0x210, arg2);
    func_020afe40(arg0, temp_r4 + 0x210, &data_0212e3fc);
    return 0;
}
