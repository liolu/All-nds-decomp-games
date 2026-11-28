#include "m2c.h"

s32 func_02024624();                                /* extern */
M2C_UNK func_02024638(s32);                         /* extern */
M2C_UNK func_0200dbbc(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020fa9cc;

void func_02081634(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02024624();
    func_0200dbbc(&data_020fa9cc, arg0);
    func_02024638(temp_r4);
}
