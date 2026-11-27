#include "m2c.h"

M2C_UNK func_0207c844();                            /* extern */
M2C_UNK func_0207d728(void *, s16 *);               /* extern */
extern M2C_UNK data_020dfb78;

void *func_0207d544(void *arg0, void *arg1) {
    s16 sp0;

    func_0207c844();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dfb78;
    M2C_FIELD(arg0, u16 *, 0x144)  = (u16) M2C_FIELD(arg1, u16 *, 0x14);
    M2C_FIELD(arg0, u16 *, 0x146)  = (u16) M2C_FIELD(arg1, u16 *, 0x16);
    M2C_FIELD(arg0, u16 *, 0x148)  = (u16) M2C_FIELD(arg1, u16 *, 0x18);
    M2C_FIELD(arg0, u16 *, 0x14A)  = (u16) M2C_FIELD(arg1, u16 *, 0x1A);
    M2C_FIELD(arg0, s32 *, 0x14C)  = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x150)  = 1;
    sp0                            = 0;
    func_0207d728(arg0, &sp0);
    return arg0;
}
