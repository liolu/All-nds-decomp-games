#include "m2c.h"

M2C_UNK func_020c3780(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020c8384(s32, void *);                 /* extern */
extern M2C_UNK data_020e6fbc;
extern s32 data_020fd278;

void *func_020c39d8(void *arg0, M2C_UNK arg1) {
    func_020c3780(arg0, arg1, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e6fbc;
    M2C_FIELD(arg0, s32 *, 0xAC)   = (s32) (M2C_FIELD(arg0, s32 *, 0xAC) & ~1);
    func_020c8384(data_020fd278, arg0);
    return arg0;
}
