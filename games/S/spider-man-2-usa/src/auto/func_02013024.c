/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020125f4(void *, M2C_UNK);             /* extern */
M2C_UNK func_02013ca8(void *, M2C_UNK);             /* extern */
M2C_UNK func_02013d10(void *);                      /* extern */
s32 func_0201aa18(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0201fa80(M2C_UNK *);                   /* extern */
M2C_UNK func_0201fc7c(void *, M2C_UNK);             /* extern */
M2C_UNK func_0201fd60(void *, M2C_UNK, s32, M2C_UNK, s32); /* extern */
s32 func_02020ce0(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0203a430(M2C_UNK *);                   /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
M2C_UNK func_02045738(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02045774(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0204af48();                                /* extern */
extern M2C_UNK data_02076b28;
extern M2C_UNK data_02077a50;
extern M2C_UNK data_0215b3d4;
extern M2C_UNK data_0215d770;

void func_02013024(void *arg0) {
    M2C_UNK var_r1;
    M2C_UNK var_r6;
    s32 temp_r0;
    s32 var_r0;
    s32 var_r2;
    s32 var_r5;

    var_r5 = 1;
    if ((M2C_FIELD(&data_0215b3d4, s32 *, 0x64) != 0xF) && (M2C_FIELD(&data_0215b3d4, s32 *, 0x64) != 0x10)) {
        var_r5 = 0;
    }
    if (var_r5 == 0) {
        func_02013ca8(arg0, 1);
        func_0201fa80(&data_02076b28);
    }
    if (var_r5 == 0) {
        func_02045774(-8, 0, 1, 1);
    } else if (M2C_FIELD(&data_0215b3d4, s32 *, 0x64) == 0x10) {
        func_02045738(0, 0, 0x10);
    }
    func_02013d10(arg0);
    func_0203a430(&data_0215d770);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    func_020125f4(arg0, 8);
    if (func_0204af48() == 0) {
        var_r6 = 1;
    } else {
        var_r6 = 0;
    }
    var_r0 = func_0203a6cc(0x54);
    if (var_r0 != 0) {
        if (var_r5 == 0) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        var_r0 = func_02020ce0(var_r0, var_r1, var_r6);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r0;
    if (var_r5 != 0) {
        return;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x18) == 0) {
        temp_r0 = func_0203a6cc(0x54);
        var_r2  = temp_r0;
        if (var_r2 != 0) {
            var_r2 = func_0201aa18(temp_r0, &data_02077a50, var_r6, 0);
        }
        func_0201fd60(arg0 + 0x14, 3, var_r2, 1, 0);
    }
    func_0201fc7c(arg0 + 0x14, 3);
}
