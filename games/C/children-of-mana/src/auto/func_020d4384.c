/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020114e4();                                /* extern */
M2C_UNK func_02013e98(s32, s32);                    /* extern */
M2C_UNK func_020d42f0(void *);                      /* extern */
extern M2C_UNK data_0210bd20;

void *func_020d4384(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210bd20;
    func_02013e98(func_020114e4(), M2C_FIELD(arg0, s32 *, 0x38));
    func_020d42f0(arg0);
    return arg0;
}
