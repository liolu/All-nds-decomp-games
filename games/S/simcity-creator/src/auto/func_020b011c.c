#include "m2c.h"

M2C_UNK func_02005bc4(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_02014050(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0202ac54(void *, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_020b0a10(void **, M2C_UNK *);              /* extern */
extern M2C_UNK data_020d0170;
extern M2C_UNK data_020d0178;

void func_020b011c(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    u8 sp4[64];
    void *sp0;
    s32 temp_r4;

    func_02014050(sp4, &data_020d0170, arg1, &data_020d0178);
    temp_r4                  = func_020b0a10(&sp0, sp4);
    M2C_FIELD(sp0, s32 *, 8) = arg3;
    func_0202ac54(sp0, arg2, 0, arg0 + 0x170);
    func_02005bc4(0, -1, temp_r4);
}
