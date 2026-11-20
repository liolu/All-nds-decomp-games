#include "m2c.h"

M2C_UNK func_020339bc(M2C_UNK *, s32);              /* extern */
M2C_UNK func_02060e90();                            /* extern */
extern M2C_UNK data_02092ed8;

void func_0207a8f8(void *arg0) {
    func_02060e90();
    func_020339bc(&data_02092ed8, M2C_FIELD(arg0, s32 *, 4));
}
