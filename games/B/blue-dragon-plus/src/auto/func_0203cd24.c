#include "m2c.h"

M2C_UNK func_02036a78(u16);                         /* extern */
s32 func_02038e10();                                /* extern */
M2C_UNK func_02038e24(s32);                         /* extern */
M2C_UNK func_0203c680();                            /* extern */
extern s32 data_0215fa78;
extern s32 data_0215fa7c;

void func_0203cd24(void) {
    s32 temp_r4;

    temp_r4 = func_02038e10();
    if (data_0215fa78 != 0) {
        func_0203c680();
        func_02036a78((u16) data_0215fa7c);
        data_0215fa78 = 0;
    }
    func_02038e24(temp_r4);
}
