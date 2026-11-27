#include "m2c.h"

M2C_UNK func_02004ed4();                            /* extern */
extern M2C_UNK (*data_02133ad4)();

void func_02004eac(s32 arg0, s32 arg1, s32 arg2) {
    if (data_02133ad4 != NULL) {
        data_02133ad4(arg0, arg1, arg2);
        return;
    }
    func_02004ed4(arg0, arg1, arg2);
}
