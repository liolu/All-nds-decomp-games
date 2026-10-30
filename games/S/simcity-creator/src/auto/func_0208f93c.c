#include "m2c.h"

M2C_UNK func_02090750(s32);                         /* extern */
s32 func_02095218();                                /* extern */
extern M2C_UNK data_020cec28;

void *func_0208f93c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020cec28;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 1;
    M2C_FIELD(arg0, s32 *, 8)      = arg1;
    func_02090750(arg1);
    M2C_FIELD(arg0, s32 *, 4) = func_02095218();
    return arg0;
}
