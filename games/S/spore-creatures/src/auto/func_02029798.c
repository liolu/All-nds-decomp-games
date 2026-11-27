#include "m2c.h"

M2C_UNK func_02002e1c(s32);                         /* extern */
M2C_UNK func_0202987c(M2C_UNK);                     /* extern */
s32 func_020298d4();                                /* extern */
M2C_UNK func_ov006_0215ac18();                      /* extern */
extern s32 data_020e0cac;

void func_02029798(M2C_UNK arg0, s32 arg1) {
    if (func_020298d4() == 0) {
        func_ov006_0215ac18();
        return;
    }
    func_0202987c(arg0);
    if (arg1 != 0) {
        return;
    }
    func_02002e1c(data_020e0cac);
}
