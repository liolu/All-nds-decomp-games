#include "m2c.h"

s32 func_02092d80(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_01ffb634(s32, s32, M2C_UNK);           /* extern */
extern s32 data_020e7874;
extern M2C_UNK data_020e7878;

s32 func_02092d40(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_01ffb634(func_02092d80(&data_020e7878, arg0, arg1), data_020e7874, arg2);
    return 0;
}
