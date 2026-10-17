/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0202cb20();                                /* extern */
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bcd5c;

void *func_02002688(void *arg0) {
    void *temp_r0;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd5c;
    M2C_FIELD(arg0, s32 *, 0x14)   = func_0202cb20();
    M2C_FIELD(arg0, s32 *, 4)      = 0;
    temp_r0                        = arg0 + 4;
    M2C_FIELD(arg0, void **, 8)    = temp_r0;
    M2C_FIELD(arg0, void **, 0xC)  = temp_r0;
    M2C_FIELD(arg0, s8 *, 0x10)    = 0;
    return arg0;
}
