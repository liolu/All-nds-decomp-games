#include "m2c.h"

M2C_UNK func_0200da84(M2C_UNK *, void *);           /* extern */
M2C_UNK func_0207f314(s32);                         /* extern */
extern M2C_UNK data_020fba30;

void func_02082a98(void *arg0) {
    func_0207f314(M2C_FIELD(arg0, s32 *, 0x40));
    func_0200da84(&data_020fba30, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
