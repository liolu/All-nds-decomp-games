#include "m2c.h"

M2C_UNK func_02035c2c(s32, M2C_UNK);                /* extern */
s32 func_02039e58(M2C_UNK *, s32, M2C_UNK *);       /* extern */
extern s32 data_020a8c1c;
extern M2C_UNK func_02035eac;
extern M2C_UNK func_02035eec;

void func_02035abc(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0       = func_02039e58(&func_02035eac, 0x1016, &func_02035eec);
    data_020a8c1c = temp_r0;
    func_02035c2c(temp_r0, arg0);
}
