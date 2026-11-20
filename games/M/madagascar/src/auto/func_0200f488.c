/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002760(void *);                      /* extern */
s32 func_02010930(s32, M2C_UNK *, M2C_UNK);         /* extern */
s32 func_020182bc();                                /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern M2C_UNK data_02085330;
extern M2C_UNK data_020bcd20;
extern M2C_UNK data_020bd2b4;
extern M2C_UNK data_020bdb40;

void *func_0200f488(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bcd20;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bd2b4;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020bdb40;
    M2C_FIELD(arg0, s8 *, 0xC)     = 0;
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, s8 *, 0x14)    = 0;
    var_r0                         = func_0207b068(0x2F4);
    if (var_r0 != 0) {
        var_r0 = func_020182bc();
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r0;
    var_r0_2                  = func_0207b068(0x38);
    if (var_r0_2 != 0) {
        var_r0_2 = func_02010930(var_r0_2, &data_02085330, 0);
    }
    M2C_FIELD(arg0, s32 *, 8) = var_r0_2;
    func_02002760(arg0);
    return arg0;
}
