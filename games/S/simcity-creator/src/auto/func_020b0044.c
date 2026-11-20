#include "m2c.h"

M2C_UNK func_02005bc4(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_02014050(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0202a854(void *, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_020b09b4(void **, M2C_UNK *);              /* extern */
extern M2C_UNK data_020d0160;
extern M2C_UNK data_020d0168;

void func_020b0044(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    u8 sp4[64];
    void *sp0;
    s32 temp_r4;

    func_02014050(sp4, &data_020d0160, arg1, &data_020d0168);
    temp_r4                     = func_020b09b4(&sp0, sp4);
    M2C_FIELD(sp0, s32 *, 0x10) = arg3;
    func_0202a854(sp0, arg2, 0, arg0 + 0x14C);
    func_02005bc4(0, -1, temp_r4);
}
