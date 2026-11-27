#include "m2c.h"

M2C_UNK func_020630a0(void *, M2C_UNK);             /* extern */
M2C_UNK func_02063aac();                            /* extern */
M2C_UNK func_ov001_02100f9c(M2C_UNK, M2C_UNK, u8, M2C_UNK, M2C_UNK *, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK func_020627f8;
extern M2C_UNK func_02062830;

void func_02062eac(void *arg0) {
    func_02063aac();
    func_ov001_02100f9c(0, 0x40, (u8) M2C_FIELD(arg0, s32 *, 0xE24), 0, &func_02062830, 0, &func_020627f8, 0);
    func_020630a0(arg0, 6);
}
