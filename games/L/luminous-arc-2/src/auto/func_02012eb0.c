#include "m2c.h"

M2C_UNK func_02012efc(s32, s32, M2C_UNK);           /* extern */
s32 func_02014078();                                /* extern */
extern s32 data_0215088c;

void func_02012eb0(s32 arg0, s32 arg1, M2C_UNK arg2) {
    if (func_02014078() != 0) {
        M2C_FIELD((data_0215088c + ((arg0 - 1) * 4)), s32 *, 0x14E8) = arg1;
    }
    func_02012efc(arg0, arg1, arg2);
}
