#include "m2c.h"

M2C_UNK func_020339bc(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02060e90();                            /* extern */
extern M2C_UNK data_02092d04;
extern M2C_UNK data_02092d1c;

void func_02079f2c(void *arg0) {
    func_02060e90();
    func_020339bc(&data_02092d04, M2C_FIELD(arg0, s32 *, 4));
    func_020339bc(&data_02092d1c, M2C_FIELD(arg0, s32 *, 4) + 0x7C);
}
