#include "m2c.h"

M2C_UNK func_020b755c(M2C_UNK, void *, M2C_UNK);    /* extern */
extern s32 data_020dfc68;
extern s32 data_020dfc6c;
extern s32 data_020dfc70;

void func_02081584(void *arg0, s32 arg1) {
    func_020b755c(0, arg0, 0x54);
    M2C_FIELD(arg0, s32 *, 0xC)  = (s32) data_020dfc70;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) data_020dfc6c;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) data_020dfc68;
    M2C_FIELD(arg0, s32 *, 4)    = arg1;
}
