#include "m2c.h"

s32 func_020a5b38();                    /* extern */

void func_020a6544(s32 arg0, M2C_UNK arg1) {
    if (func_020a5b38(arg0 + 8) != 0) {
        return;
    }
    func_020a5b38(arg0 + 0x14, arg1);
}
