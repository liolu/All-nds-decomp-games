#include "m2c.h"

M2C_UNK func_02014050(M2C_UNK *, M2C_UNK *, M2C_UNK *, s32, M2C_UNK *); /* extern */
M2C_UNK func_0205fa94(void *, M2C_UNK *, s32, M2C_UNK); /* extern */
M2C_UNK func_02061c28(M2C_UNK *);                   /* extern */
M2C_UNK func_02061c34(M2C_UNK *);                   /* extern */
s32 func_020621d8(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_02062288(M2C_UNK *, s32);              /* extern */
s32 func_020b137c(M2C_UNK);                         /* extern */
s32 func_020b155c();                                /* extern */
extern M2C_UNK data_020ccadc;
extern M2C_UNK data_020ccae4;
extern M2C_UNK data_020ccaf0;
extern M2C_UNK data_020ccb00;

void func_0205f9f4(void *arg0) {
    u8 sp10[256];
    u8 sp4[12];
    M2C_UNK var_r3;
    s32 temp_r3;
    s32 temp_r4;

    func_02061c28(sp4);
    temp_r3                      = func_020b137c(-1);
    M2C_FIELD(arg0, s8 *, 0x114) = 0;
    func_02014050(sp10, &data_020ccadc, &data_020ccae4, temp_r3, &data_020ccaf0);
    temp_r4 = func_020621d8(sp4, &data_020ccb00, sp10);
    if (func_020b155c() != 1) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    func_0205fa94(arg0, sp4, temp_r4, var_r3);
    func_02062288(sp4, temp_r4);
    func_02061c34(sp4);
}
