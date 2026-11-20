#include "m2c.h"

M2C_UNK func_02002274(void *);                      /* extern */
M2C_UNK func_02006f38(void *);                      /* extern */
M2C_UNK func_0200752c();                            /* extern */
M2C_UNK func_02007574(void *);                      /* extern */
s32 func_0206445c(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_020669a4(void *);                      /* extern */
s32 func_020b2118(M2C_UNK);                         /* extern */
M2C_UNK func_020b6494(s32);                         /* extern */
extern M2C_UNK data_020e4b90;
extern M2C_UNK data_020e825c;

void *func_02066d40(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r0;

    func_0200752c();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e4b90;
    func_020b6494(arg0 + 0x3C);
    func_02007574(arg0 + 0x8C);
    func_02002274(arg0 + 0x2A0);
    func_02006f38(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020e825c;
    func_020669a4(arg0);
    var_r0 = func_020b2118(4);
    if (var_r0 != 0) {
        var_r0 = func_0206445c(var_r0, arg1, arg2);
    }
    M2C_FIELD(arg0, s32 *, 0x2B0) = var_r0;
    return arg0;
}
