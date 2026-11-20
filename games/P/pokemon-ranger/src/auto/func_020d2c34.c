#include "m2c.h"

M2C_UNK func_020d2b04(M2C_UNK);                     /* extern */
M2C_UNK func_020da718();                            /* extern */
extern M2C_UNK (*data_020f9e44)();
extern s32 data_020f9e4c;

void func_020d2c34(M2C_UNK arg0) {
    if (data_020f9e4c == 0) {
        func_020da718();
        if (data_020f9e44 != NULL) {
            data_020f9e44();
            data_020f9e44 = NULL;
        }
    }
    func_020d2b04(arg0);
}
