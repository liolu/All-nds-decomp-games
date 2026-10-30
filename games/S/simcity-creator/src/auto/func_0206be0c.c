#include "m2c.h"

M2C_UNK func_02014050(M2C_UNK *, M2C_UNK *, s32);   /* extern */
M2C_UNK func_0201c4ac(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_02061f2c(s32, void *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020b132c();                            /* extern */
s32 func_020b137c();                                /* extern */
extern M2C_UNK data_020cd980;
extern M2C_UNK data_020cd99c;

void func_0206be0c(void *arg0) {
    u8 sp0[256];
    s32 temp_r0;

    func_0201c4ac(sp0, 0x100);
    func_020b132c();
    temp_r0 = func_020b137c();
    func_02014050(sp0, &data_020cd980, temp_r0);
    func_02061f2c(M2C_FIELD(arg0, s32 *, 0xC), arg0 + 0x24, sp0, 0x130);
    func_02014050(sp0, &data_020cd99c, temp_r0);
    func_02061f2c(M2C_FIELD(arg0, s32 *, 0xC), arg0 + 0x154, sp0, 0x5D0);
}
