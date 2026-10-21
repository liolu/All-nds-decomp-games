#include "m2c.h"

s32 func_0200d2fc(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK (*data_020ee70c)();
extern M2C_UNK func_0200cee8;

s32 func_0200d384(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0200d2fc(arg0, arg1, &func_0200cee8, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    data_020ee70c();
    return sp0;
}
