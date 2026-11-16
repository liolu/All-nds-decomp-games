/* compiler: 1.2/sp3  */
#include "m2c.h"

M2C_UNK func_02005198(M2C_UNK *);                   /* extern */
M2C_UNK func_0206cf80(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_0206dd4c(void *, M2C_UNK);                 /* extern */
s32 func_0206dfc4(u16);                             /* extern */
void *func_0206e014();                              /* extern */
extern M2C_UNK data_0216f3dc;
extern M2C_UNK data_0216fbcc;

s32 func_0206dc9c(M2C_UNK arg0, s32 arg1) {
    s32 var_r5;
    void *temp_r0;

    temp_r0 = func_0206e014();
    if (temp_r0 == NULL) {
        func_0206cf80(-0x41, arg0, 0);
        return -0x41;
    }
    if (M2C_FIELD(temp_r0, u8 *, 0xD) != 2) {
        return -0x4D;
    }
    if (func_0206dfc4(M2C_FIELD(temp_r0, u16 *, 6)) == 0) {
        func_0206cf80(-0x4C, 0, 0);
        return -0x4C;
    }
    var_r5 = M2C_FIELD(temp_r0, s32 *, 0x20);
    if (var_r5 == 0) {
        var_r5 = func_0206dd4c(temp_r0, 0);
    }
    if (arg1 != 0) {
        M2C_FIELD(&data_0216f3dc, void **, 0x8B4) = temp_r0;
        M2C_FIELD(&data_0216f3dc, s32 *, 0x8B8)   = arg1;
        func_02005198(&data_0216fbcc);
    }
    return var_r5;
}
