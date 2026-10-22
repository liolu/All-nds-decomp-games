/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020161b8(s32, M2C_UNK *, M2C_UNK);         /* extern */
M2C_UNK func_0201f7e8(void *, s32, M2C_UNK);        /* extern */
s32 func_02036848(s32, s32, M2C_UNK *);             /* extern */
M2C_UNK func_02037638(s32, M2C_UNK *);              /* extern */
s32 func_020377d0(s32, M2C_UNK);                    /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
extern M2C_UNK data_0207be7c;
extern M2C_UNK data_0207be84;
extern M2C_UNK data_020a28e4;
extern M2C_UNK data_020aa7c0;
extern M2C_UNK data_0215d644;

void func_0202f3e8(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_r0;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r4;
    s32 var_r4_2;

    var_r4 = func_0203a6cc(0x28);
    if (var_r4 != 0) {
        temp_r0 = func_0203a6cc(0x38);
        var_r1  = temp_r0;
        if (var_r1 != 0) {
            var_r1 = func_020161b8(temp_r0, &data_020aa7c0, arg1);
        }
        var_r4 = func_02036848(var_r4, var_r1, &data_0207be84);
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r4;
    var_r4_2                     = func_0203a6cc(0x28);
    if (var_r4_2 != 0) {
        temp_r0_2 = func_0203a6cc(0x38);
        var_r1_2  = temp_r0_2;
        if (var_r1_2 != 0) {
            var_r1_2 = func_020161b8(temp_r0_2, &data_020a28e4, arg1);
        }
        var_r4_2 = func_02036848(var_r4_2, var_r1_2, &data_0207be7c);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r4_2;
    var_r0                       = func_0203a6cc(0x50);
    if (var_r0 != 0) {
        var_r0 = func_020377d0(var_r0, arg1);
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0;
    func_02037638(M2C_FIELD(arg0, s32 *, 0x24), &data_0215d644);
    func_0201f7e8(arg0, M2C_FIELD(arg0, s32 *, 0x18), 1);
    func_0201f7e8(arg0, M2C_FIELD(arg0, s32 *, 0x1C), 1);
    func_0201f7e8(arg0, M2C_FIELD(arg0, s32 *, 0x24), 1);
}
