#include "m2c.h"

s32 func_020066e0();                                /* extern */
M2C_UNK func_020066f4(s32);                         /* extern */
M2C_UNK func_02007e08(M2C_UNK);                     /* extern */

void func_02007c54(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_020066e0();
    func_02007e08(arg1);
    func_020066f4(temp_r4);
}
