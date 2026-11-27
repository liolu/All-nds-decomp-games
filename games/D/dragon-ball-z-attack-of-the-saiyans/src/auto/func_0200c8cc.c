#include "m2c.h"

M2C_UNK func_0200fc30(s32, M2C_UNK *, s32);         /* extern */
extern M2C_UNK data_020b01e4;
extern M2C_UNK data_020b0c08;

s32 func_0200c8cc(s32 arg0, s32 arg1) {
    func_0200fc30(arg0, &data_020b0c08, M2C_FIELD(&data_020b01e4, s32 *, 0xA2C) - arg1);
    return arg0;
}
