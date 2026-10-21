#include "m2c.h"

s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
M2C_UNK func_020a1104(M2C_UNK *);                   /* extern */
M2C_UNK func_020a1158(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020a1210(M2C_UNK *, M2C_UNK *);        /* extern */
extern s8 data_02172740;
extern M2C_UNK data_021728b8;

void func_0209f68c(M2C_UNK *arg0, M2C_UNK arg1) {
    u8 sp0[92];
    s32 temp_r4;

    func_020a1104(sp0);
    temp_r4 = func_02006be0();
    func_020a1158(sp0, &data_021728b8, 0x14);
    func_020a1158(sp0, arg0, arg1);
    func_020a1210(sp0, &data_021728b8);
    func_02006bf4(temp_r4);
    data_02172740 = 1;
}
