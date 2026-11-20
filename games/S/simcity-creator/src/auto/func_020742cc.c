#include "m2c.h"

M2C_UNK func_02006ee8(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_02014050(M2C_UNK *, s32, s32, M2C_UNK *); /* extern */
M2C_UNK func_02061f2c(s32, void *, M2C_UNK *, s32); /* extern */
M2C_UNK func_02061fb4(s32, M2C_UNK *, void *, s32); /* extern */
M2C_UNK func_020621c0(s32, void *, s32);            /* extern */
s32 func_020b137c(M2C_UNK);                         /* extern */
s32 func_020b139c(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_020cdd30;
extern M2C_UNK data_020cdd70;
extern M2C_UNK data_020cdd80;
extern M2C_UNK data_020cdd90;

void func_020742cc(void *arg0) {
    u8 sp0[256];
    s32 temp_r0;

    temp_r0 = func_020b137c(-1);
    func_02014050(sp0, M2C_FIELD(&data_020cdd30, s32 *, 4), temp_r0, &data_020cdd70);
    func_02061f2c(M2C_FIELD(arg0, s32 *, 4), arg0 + 8, sp0, 0x1220);
    func_020621c0(M2C_FIELD(arg0, s32 *, 4), arg0 + 0x1228, 0x122);
    func_02014050(sp0, M2C_FIELD(&data_020cdd30, s32 *, 8), temp_r0, &data_020cdd80);
    func_02061fb4(M2C_FIELD(arg0, s32 *, 4), sp0, arg0 + 0x1228, 0x122);
    func_02006ee8(arg0 + 0x16B0, 0, 0x5D36);
    func_02014050(sp0, M2C_FIELD(&data_020cdd30, s32 *, 4), func_020b139c(-1, -1), &data_020cdd90);
    func_02061f2c(M2C_FIELD(arg0, s32 *, 4), arg0 + 0x16B0, sp0, 0x5CE4);
}
