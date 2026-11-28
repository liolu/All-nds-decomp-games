#include "m2c.h"

M2C_UNK func_0203e2c0(void *);                      /* extern */
M2C_UNK func_0203e318(void *);                      /* extern */
M2C_UNK func_0207432c();                            /* extern */
extern M2C_UNK data_020e02dc;

void *func_0203dbd8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e02dc;
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_0207432c();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        func_0207432c();
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        func_0207432c();
    }
    func_0203e2c0(arg0 + 0x3C);
    func_0203e318(arg0);
    return arg0;
}
