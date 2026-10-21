#include "m2c.h"

M2C_UNK func_020115d8(s32, s32, M2C_UNK);           /* extern */
s32 func_020126f8();                                /* extern */
extern s32 data_02093fe0;

void func_0201158c(s32 arg0, s32 arg1, M2C_UNK arg2) {
    if (func_020126f8() != 0) {
        M2C_FIELD((data_02093fe0 + ((arg0 - 1) * 4)), s32 *, 0x14E8) = arg1;
    }
    func_020115d8(arg0, arg1, arg2);
}
