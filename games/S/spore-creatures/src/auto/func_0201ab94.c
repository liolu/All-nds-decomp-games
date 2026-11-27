#include "m2c.h"

M2C_UNK func_02019d6c();                            /* extern */
s32 func_0201ac6c(s32);                             /* extern */
M2C_UNK func_0201b168(s32);                         /* extern */
extern M2C_UNK data_020de338;

void *func_0201ab94(void *arg0, s32 arg1) {
    func_02019d6c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020de338;
    func_0201b168(arg0 + 0x34);
    M2C_FIELD(arg0, s16 *, 0x11C) = 1;
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    M2C_FIELD(arg0, s8 *, 0x124)  = 0;
    M2C_FIELD(arg0, s32 *, 0x118) = func_0201ac6c(arg1 + 0x1C0);
    return arg0;
}
