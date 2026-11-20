/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02001cbc(void *);                      /* extern */
M2C_UNK func_02002760(void *);                      /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bd14c;

void *func_02005d14(void *arg0, u8 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bd14c;
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, u8 *, 0xC)     = arg1;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0x80;
    func_02001cbc(arg0 + 0x20);
    M2C_FIELD(arg0, s32 *, 0x2DC) = 0;
    if (M2C_FIELD(arg0, u8 *, 0xC) != 0) {
        M2C_FIELD(arg0, s32 *, 4) = 0x06200000;
        M2C_FIELD(arg0, s32 *, 8) = 0x0620C000;
    } else {
        M2C_FIELD(arg0, s32 *, 4) = 0x06000000;
        M2C_FIELD(arg0, s32 *, 8) = 0x0600C000;
    }
    func_02002760(arg0);
    return arg0;
}
