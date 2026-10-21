#include "m2c.h"

M2C_UNK func_02003764();                            /* extern */
extern M2C_UNK (*data_020935f4)();

void func_0200373c(s32 arg0, s32 arg1, s32 arg2) {
    if (data_020935f4 != NULL) {
        data_020935f4(arg0, arg1, arg2);
        return;
    }
    func_02003764(arg0, arg1, arg2);
}
