/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02017aa0(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_0201b098(M2C_UNK **, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0201f7e8(M2C_UNK **, s32, M2C_UNK);    /* extern */
M2C_UNK func_02038310(M2C_UNK **);                  /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
extern M2C_UNK data_02077e74;
extern M2C_UNK data_02080fa4;
extern M2C_UNK data_021242f0;

M2C_UNK **func_02038394(M2C_UNK **arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r1;

    func_0201b098(arg0, &data_02077e74, arg1, 0);
    *arg0 = &data_021242f0;
    func_02038310(arg0);
    temp_r0 = func_0203a6cc(0x14);
    var_r1  = temp_r0;
    if (var_r1 != 0) {
        var_r1 = func_02017aa0(temp_r0, &data_02080fa4);
    }
    func_0201f7e8(arg0, var_r1, 1);
    return arg0;
}
