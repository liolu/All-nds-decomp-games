/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020114e4();                                /* extern */
M2C_UNK func_02013e98(s32, s32);                    /* extern */
M2C_UNK func_020eda04();                            /* extern */
extern M2C_UNK data_0210efcc;

void *func_020edcec(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210efcc;
    func_020eda04();
    func_02013e98(func_020114e4(), M2C_FIELD(arg0, s32 *, 0x20));
    return arg0;
}
