#include "m2c.h"

M2C_UNK func_02015334(s32);                         /* extern */
extern M2C_UNK data_02033c20;

void func_02005da8(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 != 0xB) {
        return;
    }
    if (arg2 == 0) {
        return;
    }
    M2C_FIELD(&data_02033c20, s32 *, 4) = (s32) (M2C_FIELD(&data_02033c20, s32 *, 4) & ~0x20);
    func_02015334(M2C_FIELD(&data_02033c20, s32 *, 0x51C));
}
