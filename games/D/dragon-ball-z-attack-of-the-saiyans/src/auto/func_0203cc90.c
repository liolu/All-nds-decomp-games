#include "m2c.h"

M2C_UNK func_0200bd28();                            /* extern */
extern M2C_UNK data_020cc620;

void func_0203cc90(s32 arg0) {
    if (M2C_FIELD(&data_020cc620, u8 *, 0xB24) != 0) {
        return;
    }
    func_0200bd28(arg0);
}
