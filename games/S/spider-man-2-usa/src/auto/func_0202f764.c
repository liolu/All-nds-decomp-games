/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201f7e8(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_0201fa30(void *, M2C_UNK);             /* extern */
M2C_UNK func_0201fadc(void *);                      /* extern */
s32 func_0201fafc();                                /* extern */
M2C_UNK func_0202f3e8(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202f4f0(void *, M2C_UNK);             /* extern */
s32 func_02032598();                                /* extern */
s32 func_02032e30(s32, M2C_UNK, s32);               /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
extern M2C_UNK data_0211cb4c;

void *func_0202f764(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 var_r1;
    s32 var_r4;

    func_0201fa30(arg0, 1);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211cb4c;
    M2C_FIELD(arg0, s32 *, 0x18)   = 0;
    M2C_FIELD(arg0, s32 *, 0x1C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x20)   = 0;
    M2C_FIELD(arg0, s32 *, 0x24)   = 0;
    func_0201fadc(arg0);
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
    if (arg3 != 0) {
        func_0202f4f0(arg0, arg2);
    } else {
        func_0202f3e8(arg0, arg2);
    }
    return arg0;
}
