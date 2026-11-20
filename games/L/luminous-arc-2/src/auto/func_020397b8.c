#include "m2c.h"

M2C_UNK func_020376a8(M2C_UNK);                     /* extern */
s32 func_02050e98();                                /* extern */
s32 func_020c8664();                                /* extern */
M2C_UNK func_020ca99c();                            /* extern */
M2C_UNK func_020cd4d8();                            /* extern */
M2C_UNK func_020cd508(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_02175a4c;
extern M2C_UNK data_02182a4c;

void func_020397b8(void) {
    if (func_020c8664() == 0) {
        func_020ca99c();
        func_020cd4d8();
        if (func_02050e98() != 0) {
            M2C_FIELD(&data_02182a4c, u8 *, 0x832) = (u8) (M2C_FIELD(&data_02182a4c, u8 *, 0x832) + 1);
            func_020cd508(0, 3, 1);
            return;
        }
        func_020376a8(1);
        func_020cd508(1, 1, 1);
        return;
    }
    func_020cd4d8();
    if (M2C_FIELD(&data_02175a4c, u8 *, 0x1A) == 1) {
        func_020376a8(1);
        func_020cd508(1, 3, 0x3A);
        return;
    }
    func_020cd508(0, 3, 1);
}
