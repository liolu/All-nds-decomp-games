#include "m2c.h"

M2C_UNK func_02028f40(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0202519c(s32);                         /* extern */
extern M2C_UNK data_0216a8c8;

void func_02025b70(void *arg0) {
    func_0202519c(M2C_FIELD(arg0, s32 *, 0x40));
    func_02028f40(&data_0216a8c8, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
