#include "m2c.h"

M2C_UNK func_02061c28(M2C_UNK *);                   /* extern */
M2C_UNK func_02061c34(M2C_UNK *);                   /* extern */
s32 func_020621d8(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_020cf458;
extern M2C_UNK data_020cf45c;

void func_020a3098(void *arg0) {
    u8 sp0[12];

    func_02061c28(sp0);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_020621d8(sp0, &data_020cf458, &data_020cf45c);
    M2C_FIELD(arg0, s8 *, 0x20)  = 0;
    M2C_FIELD(arg0, s8 *, 0x21)  = 0;
    func_02061c34(sp0);
}
