/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200e8c8();           /* extern */
M2C_UNK func_0200f2c4();                      /* extern */
M2C_UNK func_02054524();                      /* extern */
M2C_UNK func_020d73f0();                      /* extern */
extern M2C_UNK data_0210c2ac;
extern M2C_UNK data_0210c2fc;

void *func_020d7a34(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210c2ac;
    func_0200e8c8(&data_0210c2fc, arg0 + 4);
    if (M2C_FIELD(arg0, s32 *, 0x34) != 0) {
        func_0200f2c4();
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        func_0200f2c4();
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    func_020d73f0(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        func_0200f2c4();
        M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    }
    func_02054524(arg0 + 0x40);
    func_0200f2c4(arg0);
    return arg0;
}
