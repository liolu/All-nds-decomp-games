#include "m2c.h"

M2C_UNK func_02045d80(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020565a8(void *);                      /* extern */
M2C_UNK func_ov000_020f727c(void *, void *);        /* extern */
extern M2C_UNK data_020df3a4;

void *func_0205642c(void *arg0, M2C_UNK arg1, s32 arg2) {
    func_02045d80(arg0, arg1, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020df3a4;
    M2C_FIELD(arg0, s32 *, 0x80)   = 0;
    M2C_FIELD(arg0, s32 *, 0x84)   = -1;
    func_ov000_020f727c(arg0 + 0x88, arg0);
    if (arg2 == 0) {
        func_020565a8(arg0);
    }
    return arg0;
}
