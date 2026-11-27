/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209d5c8();                            /* extern */
extern M2C_UNK data_0210664c;

void *func_020a6178(void *arg0, s32 arg1, s32 arg2) {
    func_0209d5c8();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210664c;
    M2C_FIELD(arg0, s32 *, 0x190)  = arg2;
    M2C_FIELD(arg0, s8 *, 0x18C)   = 0;
    return arg0;
}
