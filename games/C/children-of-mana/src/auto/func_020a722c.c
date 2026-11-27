/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0209d5c8(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_02106948;

void *func_020a722c(void *arg0, s32 arg1) {
    func_0209d5c8(arg0, 0x69);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02106948;
    M2C_FIELD(arg0, s32 *, 0x190)  = arg1;
    M2C_FIELD(arg0, s32 *, 0x194)  = 0;
    M2C_FIELD(arg0, s32 *, 0x198)  = 0;
    M2C_FIELD(arg0, s32 *, 0x1A0)  = 0;
    M2C_FIELD(arg0, s32 *, 0x1A4)  = 0;
    M2C_FIELD(arg0, s32 *, 0x1A8)  = 0;
    M2C_FIELD(arg0, s8 *, 0x18C)   = 0;
    return arg0;
}
