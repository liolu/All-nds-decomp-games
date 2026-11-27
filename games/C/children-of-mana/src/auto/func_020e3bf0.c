/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e0f8();                            /* extern */
M2C_UNK func_0200f2c4(void *);                      /* extern */
extern M2C_UNK data_020fab68;
extern M2C_UNK data_0210e2f0;

void *func_020e3bf0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210e2f0;
    if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        func_0200e0f8();
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        func_0200e0f8();
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fab68;
    func_0200f2c4(arg0);
    return arg0;
}
