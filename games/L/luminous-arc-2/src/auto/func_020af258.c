#include "m2c.h"

M2C_UNK func_020afe40(void **, void *, M2C_UNK *);  /* extern */
M2C_UNK func_020afe70(void **, void *, s32);        /* extern */
M2C_UNK func_020b9168(M2C_UNK *, M2C_UNK, s32);     /* extern */
extern M2C_UNK data_0212dc08;
extern M2C_UNK data_0212dc2c;
extern M2C_UNK data_0212dc34;
extern M2C_UNK data_0212dc88;
extern M2C_UNK data_0212dd70;

s32 func_020af258(void **arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    u8 sp0[3504];
    void *temp_r4;

    temp_r4 = *arg0;
    func_020b9168(sp0, arg3, 0xDAD);
    func_020afe40(arg0, temp_r4 + 0x210, &data_0212dc34);
    func_020afe70(arg0, temp_r4 + 0x210, arg2);
    func_020afe40(arg0, temp_r4 + 0x210, &data_0212dc08);
    func_020afe70(arg0, temp_r4 + 0x210, M2C_FIELD(temp_r4, s32 *, 0x198));
    func_020afe40(arg0, temp_r4 + 0x210, &data_0212dd70);
    func_020afe70(arg0, temp_r4 + 0x210, arg1);
    func_020afe40(arg0, temp_r4 + 0x210, &data_0212dc88);
    func_020afe40(arg0, temp_r4 + 0x210, sp0);
    func_020afe40(arg0, temp_r4 + 0x210, &data_0212dc2c);
    return 0;
}
