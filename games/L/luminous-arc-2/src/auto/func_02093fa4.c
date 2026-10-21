#include "m2c.h"

M2C_UNK func_020068c8(void *, s32, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_020069a4(void *);                      /* extern */
s32 func_02006be0();                                /* extern */
M2C_UNK func_02006bf4(s32);                         /* extern */
extern void *data_02170cc0;
extern M2C_UNK func_02094018;

void func_02093fa4(void) {
    s32 temp_r4;

    temp_r4 = func_02006be0();
    func_020069a4(data_02170cc0 + 0x22CC);
    if (M2C_FIELD(data_02170cc0, s32 *, 0x2260) == 9) {
        func_020068c8(data_02170cc0 + 0x22CC, 0x022F5341, 0, &func_02094018, 0);
    }
    func_02006bf4(temp_r4);
}
