#include "m2c.h"

M2C_UNK func_02000b64(s32);                         /* extern */
M2C_UNK func_020057e8();                            /* extern */
s32 func_02005a38();                                /* extern */
M2C_UNK func_02005c30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020176e4();                            /* extern */
extern M2C_UNK data_02033c20;

void func_0200645c(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02000b64(0x02000BAC);
    func_020057e8();
    if (arg0 != (arg0 & func_02005a38())) {
        func_020176e4();
    }
    func_02005c30(&data_02033c20, 1, arg1, arg2);
}
