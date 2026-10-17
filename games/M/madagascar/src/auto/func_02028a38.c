/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02028378(void *);                      /* extern */
s32 func_0202c368(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bfc28;
extern M2C_UNK data_020bfc40;
extern M2C_UNK data_020bfc5c;
extern M2C_UNK data_020bfc78;
extern M2C_UNK data_020bfc94;

void *func_02028a38(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bfc28;
    M2C_FIELD(arg0, s32 *, 4)      = arg1;
    M2C_FIELD(arg0, s32 *, 8)      = arg2;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s32 *, 0x14)   = func_0202c368(&data_020bfc94);
    M2C_FIELD(arg0, s32 *, 0x18)   = 0x10000;
    M2C_FIELD(arg0, s32 *, 0x1C)   = func_0202c368(&data_020bfc78);
    M2C_FIELD(arg0, s32 *, 0x20)   = 0x10000;
    M2C_FIELD(arg0, s32 *, 0x24)   = func_0202c368(&data_020bfc5c);
    M2C_FIELD(arg0, s32 *, 0x28)   = 0x200;
    M2C_FIELD(arg0, s32 *, 0x2C)   = func_0202c368(&data_020bfc40);
    M2C_FIELD(arg0, s32 *, 0x30)   = 0x200;
    M2C_FIELD(arg0, s32 *, 0x44)   = 0;
    M2C_FIELD(arg0, s32 *, 0x48)   = 0;
    M2C_FIELD(arg0, s8 *, 0x4C)    = 0;
    func_02028378(arg0);
    return arg0;
}
