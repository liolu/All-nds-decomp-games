/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020026d4();                            /* extern */
extern M2C_UNK data_020c3508;
extern void *data_020d8798;

void *func_020323d0(void *arg0, s32 arg1) {
    func_020026d4();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020c3508;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s32 *, 0x1C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x24)   = 0;
    M2C_FIELD(arg0, s32 *, 0x28)   = 0;
    M2C_FIELD(arg0, s32 *, 0x2C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x30)   = arg1;
    M2C_FIELD(arg0, s8 *, 0x34)    = 0;
    M2C_FIELD(arg0, s8 *, 0x35)    = 1;
    M2C_FIELD(arg0, s8 *, 0x36)    = 0;
    data_020d8798                  = arg0;
    return arg0;
}
