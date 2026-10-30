#include "m2c.h"

M2C_UNK func_02005bc4(M2C_UNK, M2C_UNK, s32);       /* extern */
s32 func_0206bbe8(s32);                             /* extern */
M2C_UNK func_020b0bf4(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_020b0c90(M2C_UNK *);                   /* extern */
s32 func_020b0ed8(M2C_UNK *, s32, M2C_UNK);         /* extern */
M2C_UNK func_020b2424(s32, M2C_UNK, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020cfdc8;
extern M2C_UNK data_020cfe94;
extern M2C_UNK data_020e1d4c;

void func_020ad854(void *arg0, s32 arg1) {
    s32 temp_r4;

    func_020b0bf4(&data_020e1d4c, &data_020cfe94);
    temp_r4 = func_020b0ed8(&data_020e1d4c, *((M2C_UNK *) ((s8 *) &data_020cfdc8 + (arg1 * 4))), 0x28);
    func_020b2424(func_0206bbe8(M2C_FIELD(arg0, s32 *, 0x10)), 3, temp_r4, 0x800, 0);
    func_02005bc4(0, -1, temp_r4);
    func_020b0c90(&data_020e1d4c);
}
