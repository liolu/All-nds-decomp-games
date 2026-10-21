#include "m2c.h"

void *func_020291d0(M2C_UNK *, M2C_UNK);            /* extern */
void *func_02029490();                              /* extern */
M2C_UNK func_02030098();                            /* extern */
s8 func_02078840();                                 /* extern */
extern s8 data_020a8a2c;
extern M2C_UNK func_020300f4;
extern M2C_UNK func_0203010c;

void func_02030174(void) {
    void *temp_r4;
    void *temp_r4_2;

    temp_r4 = func_02029490();
    func_02030098();
    M2C_FIELD(temp_r4, s32 *, 0x10)        = 1;
    temp_r4_2                              = func_020291d0(&func_0203010c, 0x11);
    data_020a8a2c                          = func_02078840();
    M2C_FIELD(temp_r4_2, M2C_UNK **, 0x14) = &func_020300f4;
}
