#include "m2c.h"

M2C_UNK func_0201f380(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_02038e10();                                /* extern */
M2C_UNK func_02038e24(s32);                         /* extern */
extern M2C_UNK data_0215cb9c;

void func_02030b84(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02038e10();
    func_0201f380(&data_0215cb9c, arg0);
    func_02038e24(temp_r4);
}
