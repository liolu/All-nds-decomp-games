#include "m2c.h"

M2C_UNK func_020630a0(void *, M2C_UNK);             /* extern */
M2C_UNK func_ov001_021010a4(u8, M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
extern M2C_UNK func_020628cc;
extern M2C_UNK func_02062954;

void func_02062f74(void *arg0) {
    func_ov001_021010a4((u8) M2C_FIELD(arg0, s32 *, 0xE24), &func_020628cc, 0, &func_02062954, 0);
    func_020630a0(arg0, 0xA);
}
