#include "m2c.h"

M2C_UNK func_02004dfc(void *, M2C_UNK *, void *, void *, s32, s32); /* extern */
s32 func_020050cc(void *);                          /* extern */
M2C_UNK func_02005198(void *);                      /* extern */
extern void *data_02170294;
extern M2C_UNK func_020824c8;

void func_02082440(void) {
    if ((M2C_FIELD(data_02170294, s32 *, 0x1188) != 0) && (func_020050cc(data_02170294 + 0x111C) == 0)) {
        return;
    }
    func_02004dfc(data_02170294 + 0x111C, &func_020824c8, data_02170294, data_02170294 + 0x1000, 0x1000, 0x10);
    func_02005198(data_02170294 + 0x111C);
}
