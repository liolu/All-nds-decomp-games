#include "m2c.h"

s32 func_0201d054();                                /* extern */
void *func_020aa070(s32, s32);                      /* extern */
M2C_UNK func_020b9dd0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_020b9e5c(M2C_UNK, s32, M2C_UNK);           /* extern */
M2C_UNK func_020ba308(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_0212ec7c;
extern M2C_UNK data_0212ec88;
extern M2C_UNK data_02173dcc;

void func_020b9f90(M2C_UNK arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;
    s32 temp_r4;

    func_020b9dd0(arg0, &data_0212ec88);
    temp_r4 = func_0201d054();
    func_020b9dd0(arg0, &data_0212ec7c);
    temp_r0 = func_020b9e5c(3, func_0201d054(), 0);
    if (temp_r0 == -1) {
        return;
    }
    M2C_FIELD(func_020aa070(M2C_FIELD(&data_02173dcc, s32 *, 0x14), temp_r0), s32 *, 8) = temp_r4;
    if (temp_r4 > 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    func_020ba308(temp_r0, var_r1, 0, 0, 0);
}
