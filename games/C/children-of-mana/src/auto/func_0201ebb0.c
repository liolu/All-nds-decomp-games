/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4();                            /* extern */
M2C_UNK func_02031f28(void *);                      /* extern */
M2C_UNK func_02096364(void *);                      /* extern */
extern M2C_UNK data_020fb250;

void *func_0201ebb0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fb250;
    if (M2C_FIELD(arg0, s32 *, 0x11C) != 0) {
        func_0200f2c4();
        M2C_FIELD(arg0, s32 *, 0x11C) = 0;
    }
    func_02031f28(arg0 + 0xA4);
    func_02096364(arg0);
    return arg0;
}
