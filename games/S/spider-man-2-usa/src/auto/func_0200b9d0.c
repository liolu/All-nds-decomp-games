/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200b94c(void *);                      /* extern */
M2C_UNK func_0201b098(void *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0201f7e8(void *, s32, M2C_UNK);        /* extern */
s32 func_0201fafc();                                /* extern */
s32 func_02032e30(s32, M2C_UNK *, s32);             /* extern */
s32 func_0203a6cc(M2C_UNK);                         /* extern */
extern M2C_UNK data_02072730;
extern M2C_UNK data_02077d34;
extern M2C_UNK data_02109038;

void *func_0200b9d0(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 var_r4;

    func_0201b098(arg0, &data_02077d34, arg2, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02109038;
    M2C_FIELD(arg0, s32 *, 0x54)   = arg1;
    func_0200b94c(arg0);
    var_r4 = func_0203a6cc(0x28);
    if (var_r4 != 0) {
        var_r4 = func_02032e30(var_r4, &data_02072730, func_0201fafc());
    }
    func_0201f7e8(arg0, var_r4, 1);
    return arg0;
}
