#include "m2c.h"

M2C_UNK func_0201f488(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0202deec(s32);                         /* extern */
extern M2C_UNK data_0215c9e8;

void func_0202eae0(void *arg0) {
    func_0202deec(M2C_FIELD(arg0, s32 *, 0x40));
    func_0201f488(&data_0215c9e8, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
