#include "m2c.h"

M2C_UNK func_020ca3d0(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK func_020ca898;
extern M2C_UNK func_020ca8f8;

void func_020ca860(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    if (arg2 != 0) {
        func_020ca3d0(arg0, &func_020ca8f8, arg1);
        return;
    }
    func_020ca3d0(arg0, &func_020ca898, arg1);
}
