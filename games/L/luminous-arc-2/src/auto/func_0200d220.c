#include "m2c.h"

s32 func_0200d19c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK (*data_020ee70c)();
extern M2C_UNK func_0200cee8;

s32 func_0200d220(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 sp4;
    s32 temp_r0;

    temp_r0 = func_0200d19c(arg0, arg1, arg2, &func_0200cee8, &sp4);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    data_020ee70c();
    return sp4;
}
