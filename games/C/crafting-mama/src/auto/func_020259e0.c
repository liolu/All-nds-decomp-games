#include "m2c.h"

M2C_UNK func_02000b64(s32);                         /* extern */
M2C_UNK func_02019f88();                            /* extern */
M2C_UNK func_02024dac();                            /* extern */
s32 func_02024fbc();                                /* extern */
M2C_UNK func_020251b4(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02096c80;

void func_020259e0(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02000b64(0x02000BAC);
    func_02024dac();
    if (arg0 != (arg0 & func_02024fbc())) {
        func_02019f88();
    }
    func_020251b4(&data_02096c80, 1, arg1, arg2);
}
