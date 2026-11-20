#include "m2c.h"

M2C_UNK func_020afe40(void **, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_020afe70(void **, M2C_UNK, s32);       /* extern */
extern M2C_UNK data_0212e3d8;
extern M2C_UNK data_0212e3f0;
extern M2C_UNK data_0212e3fc;
extern M2C_UNK data_0212e404;

s32 func_020b2d24(void **arg0, M2C_UNK arg1) {
    void *temp_r4;

    temp_r4 = *arg0;
    if ((s32) M2C_FIELD(temp_r4, s32 *, 0x5E8) > 0) {
        func_020afe40(arg0, arg1, &data_0212e3d8);
        func_020afe70(arg0, arg1, M2C_FIELD(temp_r4, s32 *, 0x198));
        func_020afe40(arg0, arg1, M2C_FIELD(temp_r4, M2C_UNK **, 0x5E0));
        func_020afe40(arg0, arg1, &data_0212e3f0);
        func_020afe70(arg0, arg1, M2C_FIELD(temp_r4, s32 *, 0x1A4));
        func_020afe40(arg0, arg1, &data_0212e3fc);
        M2C_FIELD(temp_r4, s32 *, 0x5E8) = 0;
    }
    if ((s32) M2C_FIELD(temp_r4, s32 *, 0x5F8) > 0) {
        func_020afe40(arg0, arg1, &data_0212e404);
        func_020afe70(arg0, arg1, M2C_FIELD(temp_r4, s32 *, 0x198));
        func_020afe40(arg0, arg1, M2C_FIELD(temp_r4, M2C_UNK **, 0x5F0));
        func_020afe40(arg0, arg1, &data_0212e3fc);
        M2C_FIELD(temp_r4, s32 *, 0x5F8) = 0;
    }
    return 0;
}
