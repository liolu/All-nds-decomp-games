#include "m2c.h"

M2C_UNK func_0206f92c(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0206d07c(s32);                         /* extern */
extern M2C_UNK data_02091ef8;

void func_0206da4c(void *arg0) {
    func_0206d07c(M2C_FIELD(arg0, s32 *, 0x40));
    func_0206f92c(&data_02091ef8, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
