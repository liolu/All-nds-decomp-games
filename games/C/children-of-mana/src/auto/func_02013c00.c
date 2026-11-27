/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f860();                            /* extern */
extern M2C_UNK data_020fae9c;

void *func_02013c00(void *arg0) {
    func_0200f860();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fae9c;
    M2C_FIELD(arg0, s32 *, 0x34)   = 0;
    M2C_FIELD(arg0, s32 *, 0x38)   = 0;
    M2C_FIELD(arg0, s32 *, 0x3C)   = 0;
    M2C_FIELD(arg0, s8 *, 0x40)    = 0;
    return arg0;
}
