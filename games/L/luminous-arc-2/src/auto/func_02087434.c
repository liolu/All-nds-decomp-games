#include "m2c.h"

s32 func_02086b78();                                /* extern */
s32 func_020ad114(void **, s32, s32, s32);          /* extern */
extern M2C_UNK data_021704e8;

s32 func_02087434(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;

    var_r6 = arg0;
    var_r5 = arg1;
    var_r4 = arg2;
    if ((M2C_FIELD(&data_021704e8, void **, 0xC) == NULL) || (func_02086b78() == 0)) {
        return 0;
    }
    if (var_r6 == -1) {
        var_r6 = M2C_FIELD(*M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), void ***, 4), s32 *, 0x23C);
    }
    if (var_r5 == 0) {
        var_r5 = *M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), void ***, 4) + 0x3B8;
    }
    if (var_r4 == 0) {
        var_r4 = *M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), void ***, 4) + 0x4B8;
    }
    return func_020ad114(M2C_FIELD(M2C_FIELD(&data_021704e8, void **, 0xC), void ***, 4), var_r6, var_r5, var_r4);
}
