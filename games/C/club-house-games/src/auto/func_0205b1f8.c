#include "m2c.h"

M2C_UNK func_02057db0(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0205a7d8(s32);                         /* extern */
extern M2C_UNK data_022637f8;

void func_0205b1f8(void *arg0) {
    func_0205a7d8(M2C_FIELD(arg0, s32 *, 0x40));
    func_02057db0(&data_022637f8, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
