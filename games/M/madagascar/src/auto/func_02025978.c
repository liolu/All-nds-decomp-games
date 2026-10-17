/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02002474(M2C_UNK **, s32, M2C_UNK);    /* extern */
M2C_UNK func_02011064(M2C_UNK **, M2C_UNK *, M2C_UNK); /* extern */
s32 func_02012224(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_0202e5a4();                            /* extern */
M2C_UNK func_0202e5d0();                            /* extern */
s32 func_0207b068(M2C_UNK);                         /* extern */
extern M2C_UNK data_020853d0;
extern M2C_UNK data_020858e0;
extern M2C_UNK data_020bf3f8;

M2C_UNK **func_02025978(M2C_UNK **arg0) {
    s32 temp_r0;
    s32 var_r1;

    func_02011064(arg0, &data_020853d0, 0);
    *arg0 = &data_020bf3f8;
    func_0202e5d0();
    func_0202e5a4();
    temp_r0 = func_0207b068(0x1C);
    var_r1  = temp_r0;
    if (var_r1 != 0) {
        var_r1 = func_02012224(temp_r0, &data_020858e0);
    }
    func_02002474(arg0, var_r1, 1);
    return arg0;
}
