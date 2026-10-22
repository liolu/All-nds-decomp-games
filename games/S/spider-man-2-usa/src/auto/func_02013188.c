/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020125f4(void *, M2C_UNK);             /* extern */
M2C_UNK func_02013270(void *, M2C_UNK);             /* extern */
M2C_UNK func_02013ca8(void *, M2C_UNK);             /* extern */
M2C_UNK func_02013d10(void *);                      /* extern */
s32 func_0201aa18(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0201fc7c(void *, M2C_UNK);             /* extern */
M2C_UNK func_0201fd60(void *, M2C_UNK, s32, M2C_UNK, s32); /* extern */
s32 func_02038394(s32, M2C_UNK);                    /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
M2C_UNK func_02045738(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_02045760(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_02077b18;

void func_02013188(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r2;

    func_02045760(2, 0, 1);
    func_02013ca8(arg0, 0);
    func_02013d10(arg0);
    if (arg1 != 0) {
        func_02013270(arg0, 1);
    }
    func_020125f4(arg0, 1);
    var_r0 = func_0203a6cc(0x54);
    if (var_r0 != 0) {
        var_r0 = func_02038394(var_r0, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x10) = var_r0;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 0x20) == 0) {
        temp_r0 = func_0203a6cc(0x54);
        var_r2  = temp_r0;
        if (var_r2 != 0) {
            var_r2 = func_0201aa18(temp_r0, &data_02077b18, 0, 0);
        }
        func_0201fd60(arg0 + 0x14, 4, var_r2, 1, 0);
    }
    func_0201fc7c(arg0 + 0x14, 4);
    func_02045738(2, 1, 1);
}
