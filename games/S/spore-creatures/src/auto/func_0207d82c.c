#include "m2c.h"

M2C_UNK func_0207d544();                            /* extern */
extern M2C_UNK data_020dfb90;

void *func_0207d82c(void *arg0, void *arg1) {
    func_0207d544();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020dfb90;
    M2C_FIELD(arg0, s32 *, 0x154)  = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    return arg0;
}
