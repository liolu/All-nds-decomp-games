#include "m2c.h"

s32 func_02007bfc(s32);                             /* extern */
M2C_UNK func_02097a78(void *, s32, s32, s32);       /* extern */
M2C_UNK func_02098940(s32, void *);                 /* extern */
M2C_UNK func_02098a14(s32, void *);                 /* extern */
extern M2C_UNK data_020d3cc4;

void func_020979e4(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r5;

    if (M2C_FIELD(arg0, s8 *, 0x14) != 0) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    func_02097a78(arg0 + 0x14, arg1, 0x100, 0x100);
    M2C_FIELD(arg0, void **, 0xC) = (void *) (arg0 + 0x14);
    temp_r1                       = func_02007bfc(arg1) + 1;
    temp_r2                       = 0x100 - temp_r1;
    func_02097a78(arg0 + 0x14 + temp_r1, arg2, temp_r2, temp_r2);
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
    if (var_r5 != 0) {
        func_02098a14(M2C_FIELD(&data_020d3cc4, s32 *, 0x24), arg0);
    }
    func_02098940(M2C_FIELD(&data_020d3cc4, s32 *, 0x24), arg0);
}
