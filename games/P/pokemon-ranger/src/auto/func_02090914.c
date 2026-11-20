#include "m2c.h"

M2C_UNK func_020b20b0(s32);                         /* extern */
M2C_UNK func_020daa10(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern s32 data_020f4730;
extern M2C_UNK func_020b6480;

void *func_02090914(void *arg0) {
    func_020b20b0(M2C_FIELD(arg0, s32 *, 0x94));
    func_020b20b0(M2C_FIELD(arg0, s32 *, 0x90));
    func_020b20b0(M2C_FIELD(arg0, s32 *, 0x8C));
    func_020b20b0(M2C_FIELD(arg0, s32 *, 0x88));
    func_020b20b0(M2C_FIELD(arg0, s32 *, 0x84));
    data_020f4730 = 0;
    func_020daa10(arg0 + 4, 4, 0xC, &func_020b6480);
    return arg0;
}
