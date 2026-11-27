/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f2c4(void *);                      /* extern */
s32 func_020114e4();                                /* extern */
M2C_UNK func_02013e98(s32, s32);                    /* extern */
M2C_UNK func_020dbf70();                            /* extern */
M2C_UNK func_020dcacc(void *);                      /* extern */
extern M2C_UNK data_0210cc8c;

void *func_020dc4f8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210cc8c;
    func_020dbf70();
    func_02013e98(func_020114e4(), M2C_FIELD(arg0, s32 *, 0x44));
    func_020dcacc(arg0 + 0x14);
    func_0200f2c4(arg0);
    return arg0;
}
