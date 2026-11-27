/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4();                      /* extern */
M2C_UNK func_0200f81c();                      /* extern */
extern M2C_UNK data_020fae9c;

void *func_02013b28(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fae9c;
    if ((M2C_FIELD(arg0, u8 *, 0x40) == 0) && (M2C_FIELD(arg0, s32 *, 0x34) != 0)) {
        func_0200f2c4();
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
    }
    func_0200f81c(arg0);
    func_0200f2c4(arg0);
    return arg0;
}
