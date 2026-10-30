#include "m2c.h"

M2C_UNK func_02014050(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_02060b9c();                            /* extern */
s32 func_02061cf4(s32, void *, M2C_UNK *);          /* extern */
extern M2C_UNK data_020ccc3c;

void func_02060c1c(void *arg0, M2C_UNK arg1) {
    u8 sp0[256];

    func_02060b9c();
    func_02014050(sp0, &data_020ccc3c, arg1);
    M2C_FIELD(arg0, s32 *, 0xF9C) = func_02061cf4(M2C_FIELD(arg0, s32 *, 0xF0C), arg0 + 0xF98, sp0);
}
