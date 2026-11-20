/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200ca10(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0201f7e8(M2C_UNK **, s32, M2C_UNK);    /* extern */
M2C_UNK func_0201fa30(M2C_UNK **, M2C_UNK);         /* extern */
s32 func_0201fafc();                                /* extern */
s32 func_02032598();                                /* extern */
s32 func_02032e30(s32, M2C_UNK, s32);               /* extern */
s32 func_0203772c(s32, M2C_UNK *, M2C_UNK);         /* extern */
s32 func_02037d30(s32, M2C_UNK);                    /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
s32 func_0204e774();                                /* extern */
extern M2C_UNK data_02114070;
extern M2C_UNK data_0215b6c4;

M2C_UNK **func_0201e860(M2C_UNK **arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;
    s32 var_r1;
    s32 var_r1_2;
    s32 var_r1_3;
    s32 var_r1_4;
    s32 var_r1_5;
    s32 var_r1_6;
    s32 var_r1_7;
    s32 var_r1_8;
    s32 var_r4;

    func_0201fa30(arg0, 1);
    *arg0  = &data_02114070;
    var_r1 = func_0203a6cc(4);
    if (var_r1 != 0) {
        var_r1 = func_02032598();
    }
    func_0201f7e8(arg0, var_r1, 1);
    var_r4 = func_0203a6cc(0x28);
    if (var_r4 != 0) {
        var_r4 = func_02032e30(var_r4, arg1, func_0201fafc());
    }
    func_0201f7e8(arg0, var_r4, 1);
    temp_r0  = func_0203a6cc(0x2DC);
    var_r1_2 = temp_r0;
    if (var_r1_2 != 0) {
        var_r1_2 = func_0200ca10(temp_r0, 0);
    }
    func_0201f7e8(arg0, var_r1_2, 1);
    temp_r0_2 = func_0203a6cc(0x18);
    var_r1_3  = temp_r0_2;
    if (var_r1_3 != 0) {
        var_r1_3 = func_02037d30(temp_r0_2, 0);
    }
    func_0201f7e8(arg0, var_r1_3, 1);
    temp_r0_3 = func_0203a6cc(0x50);
    var_r1_4  = temp_r0_3;
    if (var_r1_4 != 0) {
        var_r1_4 = func_0203772c(temp_r0_3, &data_0215b6c4, 0);
    }
    func_0201f7e8(arg0, var_r1_4, 1);
    var_r1_5 = func_0203a6cc(8);
    if (var_r1_5 != 0) {
        var_r1_5 = func_0204e774();
    }
    func_0201f7e8(arg0, var_r1_5, 1);
    temp_r0_4 = func_0203a6cc(0x2DC);
    var_r1_6  = temp_r0_4;
    if (var_r1_6 != 0) {
        var_r1_6 = func_0200ca10(temp_r0_4, 1);
    }
    func_0201f7e8(arg0, var_r1_6, 1);
    temp_r0_5 = func_0203a6cc(0x18);
    var_r1_7  = temp_r0_5;
    if (var_r1_7 != 0) {
        var_r1_7 = func_02037d30(temp_r0_5, 1);
    }
    func_0201f7e8(arg0, var_r1_7, 1);
    temp_r0_6 = func_0203a6cc(0x50);
    var_r1_8  = temp_r0_6;
    if (var_r1_8 != 0) {
        var_r1_8 = func_0203772c(temp_r0_6, &data_0215b6c4, 1);
    }
    func_0201f7e8(arg0, var_r1_8, 1);
    return arg0;
}
