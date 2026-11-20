#include "m2c.h"

M2C_UNK func_020339bc(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02060e90();                            /* extern */
extern M2C_UNK data_02092df0;
extern M2C_UNK data_02092e08;
extern M2C_UNK data_02092e20;

void func_0207a2d4(void *arg0) {
    func_02060e90();
    func_020339bc(&data_02092df0, M2C_FIELD(arg0, s32 *, 4));
    func_020339bc(&data_02092e08, M2C_FIELD(arg0, s32 *, 4) + 0x7C);
    func_020339bc(&data_02092e20, M2C_FIELD(arg0, s32 *, 4) + 0xF8);
}
